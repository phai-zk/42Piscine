/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:35:58 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/09 19:54:50 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **tab, int i, int j)
{
	char	*base;
	
	base = tab[i];
	tab[i] = tab[j];
	tab[j] = base;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[i][0] < tab[j][0])
				ft_swap(tab, i, j);
			else if (tab[i][0] == tab[j][0])
			{
				k = 1;
				while (tab[i][k] != tab[j][k] && tab[i][k] && tab[j][k])
					k++;
				if (tab[i][k] < tab[j][k])
					ft_swap(tab, i, j);
			}
			j++;
		}
		i++;
	}
}

void	ft_putarg(int ac, char **str)
{
	int	i;
	int	j;

	i = 0;
	ft_sort_char_tab(str, ac);
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
			ft_putchar(str[i][j]);
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	ft_putarg(ac, av);
	return (0);
}
