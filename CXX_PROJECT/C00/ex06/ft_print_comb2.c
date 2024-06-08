/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:09:11 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/08 17:05:03 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	_write(int n[4])
{
	print(n[0] + 48);
	print(n[1] + 48);
	print(' ');
	print(n[2] + 48);
	print(n[3] + 48);
	if (!(n[0] == 9 && n[1] == 8))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	n[4];

	i = 0;
	n[0] = 0;
	n[1] = 0;
	n[2] = 0;
	n[3] = 0;
	while (i <= 98)
	{
		n[0] = i / 10;
		n[1] = i % 10;
		j = i + 1;
		while (j <= 99)
		{
			n[2] = j / 10;
			n[3] = j % 10;
			_write(n);
			j++;
		}
		i++;
	}
}
