/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:43:44 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 22:22:21 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib/str.h"

int	**str_to_matrix(char *str, int size)
{
	int	i;
	int	j;
	int	**matrix;

	matrix = (int **)malloc(size * 8);
	i = -1;
	while (++i < size)
		matrix[i] = (int *)malloc(size * 4);
	i = 0;
	j = 0;
	while (*str)
	{
		if (i > size - 1)
		{
			i = 0;
			j++;
		}
		if (j > size - 1)
			break ;
		if ('0' <= str[0] && str[0] <= '9')
			matrix[j][i] = str[0] - 48;
		i++;
		str += 2;
	}
	return (matrix);
}

int	**set_matrix(int size)
{
	int	i;
	int	j;
	int	**matrix;

	matrix = (int **)malloc(size * 8);
	i = -1;
	while (++i < size)
		matrix[i] = (int *)malloc(size * 4);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}
