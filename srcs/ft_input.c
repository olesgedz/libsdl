/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:22:51 by jblack-b          #+#    #+#             */
/*   Updated: 2019/04/24 18:26:12 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"

void	ft_input(void *main, int (*f)(void *main, SDL_Event *ev))
{
	SDL_Event ev;

	while (SDL_PollEvent(&ev))
		f(main, &ev);
}
