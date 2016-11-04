/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:17:10 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/04 15:19:57 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int			ft_display_file(char *fichier)
{
	int		fd;
	char	*buffer;

	fd = open(fichier, O_RDONLY);
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
	return (0);
}

int			main(int ac, char **av)
{
	char a;

	a = '\n';
	if (ac != 2)
	{
		if (ac < 2)
		{
			write(2, "File name missing.\n", 19);
		}
		else if (ac > 2)
		{
			write(2, "Too many arguments.\n", 20);
		}
		return (0);
	}
	if (ac == 2)
	{
		ft_display_file(av[1]);
		return (0);
	}
}
