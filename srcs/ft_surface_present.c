/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_present.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:09:27 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/19 00:51:43 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_surface_present(t_sdl *sdl, t_surface *surface)
{
	SDL_UpdateTexture(sdl->texture, NULL,\
		surface->data, surface->width * sizeof(Uint32));
	SDL_RenderCopy(sdl->renderer, sdl->texture, NULL, NULL);
	SDL_RenderPresent(sdl->renderer);
}
