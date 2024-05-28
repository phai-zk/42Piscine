/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 00:03:52 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/26 20:20:53 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	start[9];
	char	end[9];
	int		i;
	int		base;

	i = n;
	while (i-- > -1)
		start[i] = i + '0';
	i = n;
	while (i-- > -1)
		end[i] = 10 - n + i + '0';
	write(1, start, n);
	while (start[0] != end[0])
	{
		i = n - 1;
		while (start[i] == end[i])
			i--;
		base = ++(start[i]);
		while (i < n)
			start[i++] = base++;
		write(1, ", ", 2);
		write(1, start, n);
	}
}

int main(int argc, char const *argv[])
{
	ft_print_combn(9);
	return 0;
}
