/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_clear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:15:21 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/18 14:18:50 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void		ft_surface_clear(t_sdl *sdl)
{
	ft_bzero(sdl->surface, sizeof(Uint32) * sdl->win_w * sdl->win_h);
}
