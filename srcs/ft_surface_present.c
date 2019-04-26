/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_present.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:09:27 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/26 21:05:55 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_surface_present(t_sdl *sdl, t_surface *surface)
{
	SDL_UpdateTexture(sdl->texture->sdl_texture, NULL,\
		surface->data, surface->width * sizeof(Uint32));
	SDL_RenderCopy(sdl->renderer, sdl->texture->sdl_texture, NULL, NULL);
	SDL_RenderPresent(sdl->renderer);
}
