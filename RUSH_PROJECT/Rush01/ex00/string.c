/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 10:58:27 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 14:23:24 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
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

void	str_to_matrix(char *str, int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (i > 3)
		{
			i = 0;
			j++;
		}
		if (j > 3)
			break ;
		if ('0' <= str[0] && str[0] <= '9')
			matrix[j][i] = str[0] - 48;
		i++;
		str += 2;
	}
}

int	count_arg_num(char *input)
{
	int	i;

	i = 0;
	while (i < 32)
    {
	    if (input[i] < '1' || input[i] > '4')
			return (1);
		i+=2;
	}
	return (0);
}

void	print_map(int tab[4][4])
{
	int		i;
	int		j;
	char	str;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			str = tab[i][j] + '0';
			str_print(&str);
			if (j < 3)
				str_print(" ");
		}
		str_print("\n");
	}
}
