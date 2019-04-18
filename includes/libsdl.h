/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsdl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:47:22 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/18 15:19:33 by jblack-b         ###   ########.fr       */
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

typedef struct s_sdl
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *texture;
	Uint32 *surface;
	size_t win_w;
	size_t win_h;
	t_mouse mouse;

} t_sdl;

void			ft_plot_line(t_sdl *sdl,
	t_point *p1, t_point *p2, int color);
void			ft_image_set_pixel(t_sdl *sdl, t_point *p, int color);
void			ft_init_window(t_sdl *sdl, size_t win_w, size_t win_h);
void			ft_exit(int (*f)(void));
void			ft_input(t_sdl *sdl, int (*f)(t_sdl *sdl, SDL_Event *ev));
void			ft_surface_present(t_sdl *sdl);
void			ft_surface_clear(t_sdl *sdl);
#endif