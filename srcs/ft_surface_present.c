/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_present.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:09:27 by jblack-b          #+#    #+#             */
/*   Updated: 2019/10/17 19:09:52 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

/*
**	Fucntion: puts the surface on the screen
**	Parameters: sdl, surface
**	Return: none
*/

void	ft_surface_present(t_sdl *sdl, t_surface *surface)
{
	SDL_UpdateTexture(sdl->texture->sdl_texture, NULL,\
		surface->data, surface->width * sizeof(Uint32));
	SDL_RenderCopy(sdl->renderer, sdl->texture->sdl_texture, NULL, NULL);
	SDL_RenderPresent(sdl->renderer);
}
