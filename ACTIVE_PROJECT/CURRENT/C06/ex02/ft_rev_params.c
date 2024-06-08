/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:35:58 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 16:05:28 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarg(int ac, char **av)
{
	int	i;

	while (av[--ac] && ac > 0)
	{
		i = -1;
		while (av[ac][++i])
			ft_putchar(av[ac][i]);
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
