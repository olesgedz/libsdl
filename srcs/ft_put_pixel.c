/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:04:54 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/18 14:29:34 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void			ft_image_set_pixel(t_sdl *sdl, t_point *p, int color)
{
		*(uint32_t *)(sdl->surface + (p->x + p->y * sdl->win_w)) = color;
}
