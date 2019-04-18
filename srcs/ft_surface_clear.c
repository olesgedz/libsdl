/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_clear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:15:21 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/19 01:03:16 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void		ft_surface_clear(t_surface *surface)
{
	ft_bzero(surface->data, sizeof(Uint32) * surface->width * surface->height);
}
