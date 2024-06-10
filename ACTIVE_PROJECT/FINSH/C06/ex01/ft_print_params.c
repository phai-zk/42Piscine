/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:35:58 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/10 16:56:24 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarg(char **str)
{
	int	i;
	int	j;

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
	if (ac < 2)
		return (1);
	ft_putarg(av);
	return (0);
}
