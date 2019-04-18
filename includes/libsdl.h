/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsdl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:47:22 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/19 01:02:30 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSDL_H
#define LIBSDL_H
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include "SDL2/SDL.h"


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
void			ft_input(t_sdl *sdl, int (*f)(t_sdl *sdl, SDL_Event *ev));
void			ft_surface_present(t_sdl *sdl, t_surface *surface);
void			ft_surface_clear(t_surface *surface);
t_surface 		*ft_surface_create(int width, int height);
#endif