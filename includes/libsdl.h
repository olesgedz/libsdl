/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsdl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:47:22 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/24 18:27:44 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSDL_H
#define LIBSDL_H
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include "SDL2/SDL.h"

typedef struct s_rgba
{
	int r;
	int g;
	int b;
	int a; 
} t_rgba;


typedef struct			s_line
{
	t_point		start;
	t_point		end;
	int			dx;
	int			dy;
	int			sx;
	int			sy;
	int			err;
	int			err2;
}						t_line;
typedef struct s_mouse
{
	int x;
	int y;
	int last_x;
	int last_y;
	int pressed;
} t_mouse; 

typedef struct s_surface
{
	Uint32 *data;
	size_t width;
	size_t height;
} t_surface;

typedef struct s_size
{
	int width;
	int height;
} t_size;

typedef struct s_rectangle
{
	t_point position;
	t_size	size;
}	t_rectangle;

typedef struct s_sdl
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *texture;
	t_surface *surface;
	size_t win_w;
	size_t win_h;
	t_mouse mouse;

} t_sdl;

void			ft_plot_line(t_surface *surface,
	t_point *p1, t_point *p2, int color);
void			ft_put_pixel(t_surface *surface, t_point *p, int color);
void			ft_init_window(t_sdl *sdl, size_t win_w, size_t win_h);
void			ft_exit(int (*f)(void));
void			ft_input(void *main, int (*f)(void *main, SDL_Event *ev));
void			ft_surface_present(t_sdl *sdl, t_surface *surface);
void			ft_surface_clear(t_surface *surface);
t_surface		*ft_surface_create(int width, int height);
t_surface		*ft_surface_combine(t_surface *dst,\
					t_surface *src, t_rectangle *rect);

t_surface 		*ft_ppm_image_read(char *s);
int 			ft_ppm_image_write(t_surface *surface);
int				ft_get_light(int start, int end, double percentage);
double			ft_percent(int start, int end, int current);
int				ft_get_color(int c1, int c2, double p);
t_rgba 			*ft_hex_to_rgb(int hex, int a);
#endif