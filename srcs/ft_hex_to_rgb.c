/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_rgb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:57:48 by olesgedz          #+#    #+#             */
/*   Updated: 2019/04/23 00:58:09 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_rgba *ft_hex_to_rgb(int hex, int a)
{
	static t_rgba rgb;
	rgb.r = (hex >> 16) & 0xFF; 
	rgb.g = (hex >> 8) & 0xFF; 
	rgb.b = hex & 0xFF; 
	rgb.a = a;
	return (&rgb);
}