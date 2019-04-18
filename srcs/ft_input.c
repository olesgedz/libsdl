/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:22:51 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/18 15:19:34 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_input(t_sdl *sdl, int (*f)(t_sdl *sdl, SDL_Event *ev))
{
	SDL_Event ev;

	while (SDL_PollEvent(&ev))
		f(sdl, &ev);
}
