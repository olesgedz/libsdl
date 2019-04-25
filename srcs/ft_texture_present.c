/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_present_texture.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:56:24 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/25 19:01:19 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_texture_present(t_sdl *sdl)
{
	SDL_UnlockTexture(sdl->texture);
	SDL_RenderCopy(sdl->renderer, sdl->texture, NULL, NULL);
	SDL_RenderPresent(sdl->renderer);
}