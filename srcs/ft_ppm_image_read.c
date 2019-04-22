/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppm_image_read.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olesgedz <olesgedz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:13:42 by olesgedz          #+#    #+#             */
/*   Updated: 2019/04/23 00:54:48 by olesgedz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

t_surface *ft_ppm_image_read(char *s)
{
    int fd = open(s, O_RDONLY);
	char *line;
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n",line);
	}
	return (NULL);
}