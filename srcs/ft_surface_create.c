/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:29:45 by olesgedz          #+#    #+#             */
/*   Updated: 2019/10/17 19:12:05 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

/*
**	Fucntion: creates a surface
**	Parameters: width, height os the surface
**	Return: malloced surface
*/

t_surface	*ft_surface_create(int width, int height)
{
	t_surface *new_surface;

	if (!(new_surface = ft_memalloc(sizeof(t_surface))))
		return (0);
	if (!(new_surface->data = ft_memalloc(sizeof(Uint32) * width * height)))
		return (0);
	new_surface->height = height;
	new_surface->width = width;
	return (new_surface);
}
