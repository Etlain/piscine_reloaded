/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:08:40 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/31 17:43:17 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (unsigned char*)s;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
}
