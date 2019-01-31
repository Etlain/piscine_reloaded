/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:00:01 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/31 19:20:14 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[10];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, buf, 9) > 0)
		{
			ft_putstr(buf);
			ft_bzero(buf, 10);
		}
		close(fd);
	}
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
