/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:09:11 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/25 12:12:00 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printChar(char	c)
{
	write(1, &c, 1);
}

void	_write(char i, char j, char k, char w)
{
	if(i <= k && j < w)
	{
		printChar(i);
		printChar(j);
		printChar(' ');
		printChar(k);
		printChar(w);

		if(!(i == '9' && j == '8' && k == '9'&& w == '9'))
		{
			printChar(',');
			printChar(' ');
		}
	}
}

void	comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	w;

	i = '0';
	while(i <= '9')
	{
		j = '0';
		while(j <= '9')
		{
			k = '0';
			while(k <= '9')
			{
				w = '0';
				while(w++ <= '9')
				{
					_write(i, j, k, w);
					w++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	comb2();
	return (0);
}
