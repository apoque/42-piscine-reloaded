/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:35:17 by apoque            #+#    #+#             */
/*   Updated: 2017/11/08 18:33:24 by apoque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s1)
{
	int i;

	i = 0;
	while (s1[i] != 0)
	{
		ft_putchar(s1[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[1];

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
	return (0);
}
