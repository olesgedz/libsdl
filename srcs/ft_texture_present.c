/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_texture_present.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:56:24 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/26 21:11:49 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_texture_present(t_sdl *sdl, t_texture *texture)
{
	SDL_UnlockTexture(texture->sdl_texture);
	SDL_RenderCopy(sdl->renderer, texture->sdl_texture, NULL, NULL);
	SDL_RenderPresent(sdl->renderer);
}