/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 00:03:52 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/26 03:09:46 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{

	if (n > 10 || n < 0)
		return ;
	char	start[9];
	char	end[9];
	int	i;
	int	base;
	
	i = n;
	while (i-- > -1)
	{	
		start[i] = i + '0';
	}
	i = n;
	while (i-- > -1)
	{
		end[i] = 10 - n + i + '0';
	}
	write(1, start, n);
	while (start[0] != end[0])
	{

		i = n-1;
		while (start[i] == end[i])
			i--;
		base = ++(start[i]);
		while (i <= n)
			start[i++] = base++;
		write(1, ", ", 2);
		write(1, start, n);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
