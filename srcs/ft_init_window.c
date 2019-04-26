/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:44:17 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/26 21:03:59 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_init_window(t_sdl *sdl, size_t win_w, size_t win_h)
{
	sdl->win_h = win_h;
	sdl->win_w = win_w;
	sdl->surface = ft_surface_create(win_w, win_h);
	SDL_CreateWindowAndRenderer(win_w,\
		win_h, 0, &(sdl->window), &(sdl->renderer));
	SDL_ShowCursor(SDL_TRUE);
	sdl->texture = ft_texture_create(sdl, win_w, win_h);
}
