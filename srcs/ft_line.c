/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:55:10 by lminta            #+#    #+#             */
/*   Updated: 2019/10/17 18:57:57 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

/*
**void	ft_line(t_surface *surface, t_point *p1, t_point *p2, int color)
**{
**	int steep;
**
**	steep= FALSE;
**	if (abs(p1->x - p2->x) < abs(p1->y - p2->y))
**	{
**		ft_swap_int(&p1->x, &p1->y);
**		ft_swap_int(&p2->x, &p2->y);
**		steep = TRUE;
**	}
**	if (p1->x>p2->x)
**	{
**		ft_swap_int(&p1->x, &p2->x);
**		ft_swap_int(&p1->y, &p2->y);
**	}
**	int dx = p2->x-p1->x;
**	int dy = p2->y-p1->y;
**	float derror = fabs(dy/(float)(dx));
**	float error = 0;
**	int y = p1->y;
**	for (int x=p1->x; x<=p2->x; x++) {
**		if (steep) {
**			*(((Uint32 *)surface->data) + (y + x * surface->width)) = color;
**		} else {
**			*(((Uint32 *)surface->data) + (x + y * surface->width)) = color;
**		}
**		error += derror;
**		if (error>.5) {
**			y += (p2->y>p1->y?1:-1);
**			error -= 1.;
**		}
**	}
**}
*/
