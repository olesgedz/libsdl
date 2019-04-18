/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:04:54 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/19 01:40:57 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void			ft_put_pixel(t_surface *surface, t_point *p, int color)
{
		*(((Uint32 *)surface->data) + (p->x + p->y * surface->width)) = color;
}
