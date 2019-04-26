/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_texture_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:46:40 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/26 21:27:23 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_texture		*ft_texture_create(t_sdl *sdl, int width, int height)
{
	t_texture		*new_texture;
	
	new_texture = malloc(sizeof(t_texture));
	new_texture->sdl_texture = SDL_CreateTexture(sdl->renderer,
								SDL_PIXELFORMAT_ARGB8888,
								SDL_TEXTUREACCESS_STREAMING,
								width, height);
	new_texture->width = width;
	new_texture->height = height;
	return (new_texture);
}
