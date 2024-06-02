/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 20:25:52 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 22:21:41 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/main_rule.h"
#include <stdlib.h>

int	solve(int **frame, int **tab, int pos, int n)
{
	int	tower;

	if (pos == n * n)
		return (1);
	tower = 0;
	while (++tower <= n)
	{
		if (find_duplicate(tab, pos / n, pos % n, tower))
		{
			tab[pos / n][pos % n] = tower;
			if (check_col_row(tab, pos, n, frame))
			{
				if (solve(frame, tab, pos + 1, n))
					return (1);
			}
			else
				tab[pos / n][pos % n] = 0;
		}
	}
	return (0);
}

void	free_all(int **matrix1, int **matrix2, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		free(matrix1[i]);
	free(matrix1);
	i = -1;
	while (++i < size)
		free(matrix2[i]);
	free(matrix2);
}
