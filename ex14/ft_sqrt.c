/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <mmouhssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 18:09:23 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/27 23:12:57 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (i <= nb / 2)
	{
		if (result == nb)
			return (i);
		i++;
		if (nb != result)
			result = i * i;
		else
			return (0);
	}
	return (0);
}
