/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:32:54 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/24 20:59:01 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void			ft_vline(t_surface *surface,\
	t_point *p1, t_point *p2, int color)
{	
	int *pix = (int*) surface->data;
	 p1->y = clamp(p1->y, 0, surface->height-1);
	 p2->y = clamp(p2->y, 0,surface->height-1);
	while (p1->y != p2->y)
	{
		//ft_put_pixel(surface, p1, color);
		pix[p1->y* surface->width+p1->x] = color;
		p1->y++;
	}
}

// static void vline(int x, int y1,int y2, int top,int middle,int bottom, t_game *game)
// {
// 	int *pix = (int*) game->sdl.surface->data;
// 	 y1 = clamp(y1, 0, WIN_H-1);
// 	 y2 = clamp(y2, 0, WIN_H-1);
// 	if(y2 == y1)
// 	 	pix[y1* game->sdl.surface->width+x] = middle;
// 	else if(y2 > y1)
// 	 {
// 	 	pix[y1 *game->sdl.surface->width +x] = top;
// 	 	for(int y=y1+1; y<y2; ++y) pix[y*game->sdl.surface->width+x] = middle;
// 		pix[y2*game->sdl.surface->width+x] = bottom;
// 	 }
// }
