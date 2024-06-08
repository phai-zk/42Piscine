/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supanuso <supanuso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:50:02 by wkullana          #+#    #+#             */
/*   Updated: 2024/05/26 10:02:06 by supanuso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_x(int x, char start, char mid, char end)
{
	int	index_x;

	index_x = 1;
	while (index_x <= x)
	{
		if (index_x == 1)
			ft_putchar(start);
		else if (index_x == x)
			ft_putchar(end);
		else
			ft_putchar(mid);
		index_x++;
	}
}

void	rush(int x, int y)
{
	int	index_y;

	index_y = 1;
	if (y < 1 || x < 1)
		return ;
	while (index_y <= y)
	{
		if (index_y == 1)
			write_x(x, 'A', 'B', 'A');
		else if (index_y == y)
			write_x(x, 'C', 'B', 'C');
		else
			write_x(x, 'B', ' ', 'B');
		index_y++;
		write(1, "\n", 1);
	}
}
