/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:35:02 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/25 11:08:03 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_write(char c)
{
	write(1, &c, 1);
}

void	top_bottom(int col)
{
	int	i;

	i = 1;
	while (i <= col)
	{
		if (i == 1)
			_write('A');
		else if (i == col)
			_write('C');
		else
			_write('B');
		i++;
	}
	_write('\n');
}

void	body(int col, int rows)
{
	int	i;
	int	j;

	i = 1;
	while (i <= rows)
	{
		j = 1;
		while (j <= col)
		{
			if (j == 1 || j == col)
				_write('B');
			else
				_write(' ');
			j++;
		}
		_write('\n');
		i++;
	}
}

void	rush(int col, int rows)
{
	if (rows < 1)
		return ;
	top_bottom(col);
	body(col, rows-2);
	if (rows > 1)
		top_bottom(col);
}

int	main(void)
{
	rush(2,0);
	return (0);
}
