/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_texture_lock.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:00:59 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/25 19:06:34 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

Uint32 *ft_texture_lock(t_sdl *sdl)
{
		SDL_LockTexture(sdl->texture,NULL, (void **)sdl->pixels, &sdl->pitch);
		return (sdl->pixels);
}
