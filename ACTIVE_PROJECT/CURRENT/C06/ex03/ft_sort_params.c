/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:35:58 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 16:17:29 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_char_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*base;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				base = tab[i];
				tab[i] = tab[j];
				tab[j] = base;
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

	ft_sort_char_tab(str, ac);
	i = 0;
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
	char **test = {"T" "A"};
	ft_putarg(2, test);
	if (ac < 2)
		return (1);
	ft_putarg(ac, av);
	return (0);
}
