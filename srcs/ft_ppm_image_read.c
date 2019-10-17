/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppm_image_read.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lminta <lminta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:13:42 by olesgedz          #+#    #+#             */
/*   Updated: 2019/10/17 19:02:00 by lminta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsdl.h"
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

/*
**	Fucntion: reads ppm image to surface
**	Parameters: name of the file
**	Return: t_surface
**	! Work in progress doesnt work
*/
/*
**t_surface	*ft_ppm_image_read(char *s)
**{
**	int fd;
**	char *line;
**
**	fd = open(s, O_RDONLY);
**	while (get_next_line(fd, &line) > 0)
**	{
**		printf("%s\n",line);
**	}
**	return (NULL);
**}
*/
