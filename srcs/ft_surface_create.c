/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surface_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 00:29:45 by olesgedz          #+#    #+#             */
/*   Updated: 2019/04/19 00:59:46 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

t_surface *ft_surface_create(int width, int height)
{
    t_surface *new_surface;
    new_surface = malloc(sizeof(t_surface));
    new_surface->data = malloc(sizeof(Uint32) * width * height);
    new_surface->height = height;
    new_surface->width = width;
    return (new_surface);
}