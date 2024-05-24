/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:35:02 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/24 22:39:59 by cnzk             ###   ########.fr       */
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
	while(i <= col)
	{
		if(i == 1)
			_write('A');
		else if(i == col)
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
	while(i <= rows)
	{
		j = 1;
		while(j <= col)
		{
			if(j == 1 || j == col)
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
	top_bottom(col);
	body(col, rows-2);
	if (rows > 1)
		top_bottom(col);
}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);	
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}
