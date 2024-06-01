/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 10:58:27 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/01 19:28:54 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print(char *str)
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

int	is_numberic(char str)
{
	return ('0' <= str && str <= '9');
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
		if (is_numberic(str[0]))
			matrix[j][i] = str[0] - 48;
		i++;
		str += 2;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_map(int tab[4][4])
{
	int i;
	int j;
	
	i = -1;
	j = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putchar(tab[i][j]+'0');
			if (j < 3)
				print(" ");
		}
		print("\n");
	}
	
}
