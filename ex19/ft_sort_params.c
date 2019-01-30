/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmouhssi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:15:09 by mmouhssi          #+#    #+#             */
/*   Updated: 2019/01/30 17:58:01 by mmouhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (unsigned int)((unsigned char)*s1 - (unsigned char)*s2);
}

char **ft_sort_tab(char **tab)
{
	int i;
	int b;
	char *tmp;

	i = 0;
	b = 1;
	if (!tab || !tab[i] || !tab[i + 1])
		return (tab);
	while (b)
	{
		b = 0;
		i = 0;
		while (tab[i + 1] != '\0')
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				b = 1;
			}
			i++;
		}
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	if (argc > 1)
	{
		i = 0;
		tab = &argv[1];
		tab = ft_sort_tab(tab);
		while (i < argc - 1)
		{	
			ft_putstr(tab[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
