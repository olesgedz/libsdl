/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_combine.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 21:04:57 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/19 22:26:33 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_surface		*ft_surface_combine(t_surface *dst,\
					t_surface *src, t_rectangle *rect)
{
	size_t j;
	size_t k;

	j = rect->position.y;
	while (j < rect->position.y + rect->size.height)
	{
		k = rect->position.x;
		while (k < rect->position.x + rect->size.width)
		{
			if (src->data[k + j * src->width] != 0)
				dst->data[k + j * dst->width] = src->data[k + j * src->width];
			k++;
		}
		j++;
	}
	return (dst);
}