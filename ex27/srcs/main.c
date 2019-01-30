/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:00:01 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/30 22:06:21 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

// remettre flags dans makefile
int main(int argc, char **argv)
{
	int fd;
	char buf[10];

	if (argc == 2)
	{
		fd = open(argv[2], O_RDONLY);
		while (read(fd, buf, 10))
			ft_putstr(buf);
		close(fd);
	}
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
