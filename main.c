/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 05:26:42 by jrameau           #+#    #+#             */
/*   Updated: 2019/03/28 18:58:14 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;
	char	test[8];

	if (argc == 1)
	{
		fd = 0;
		while (get_next_line(fd, &line) == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	else if (argc == 2 && !ft_strcmp(argv[1], "test*"))
	{
		ft_strcpy(test, "test");
		i = -1;
		while (++i < 5000)
		{
			fd = open(ft_strcat(test, ft_itoa(i)), O_RDONLY);
			while (get_next_line(fd, &line) == 1)
			{
				ft_putendl(line);
				free(line);
			}
		}
	}
	else if (argc < 1)
		return (2);
	i = 0;
	while (argv[++i])
	{
		fd = open(argv[i], O_RDONLY);
		while (get_next_line(fd, &line) == 1)
		{
			ft_putendl(line);
			free(line);
		}
	}
	if (argc > 1)
		close(fd);
}
