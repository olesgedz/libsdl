/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:04:54 by jblack-b          #+#    #+#             */
/*   Updated: 2019/10/17 19:03:48 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

/*
**	Fucntion: puts a pixel on the surface
**	Parameters: surface, coordinates on the surface as t_point
**	Return: none
**	! Don't use it, writting it "inline"(in the code) saves a lot of resources
**	? should it use inline prefix? need to test that
*/

void			ft_put_pixel(t_surface *surface, t_point *p, int color)
{
	*(((Uint32 *)surface->data) + (p->x + p->y * surface->width)) = color;
}
