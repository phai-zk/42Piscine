/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:20:54 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 22:21:52 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	str_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
}

void	str_print_map(int **map, int size)
{
	int		i;
	int		j;
	char	str;

	i = -1;
	j = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			str = map[i][j] + '0';
			print_char(str);
			if (j < size - 1)
				str_print(" ");
		}
		str_print("\n");
	}
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
