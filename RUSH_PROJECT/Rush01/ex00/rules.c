/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:40:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 13:34:12 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/string.h"

int	find_duplicate(int tab[4][4], int pos, int tower)
{
	int	i;

	i = -1;
	while (++i < pos % 4)
	{
		if (tab[pos / 4][i] == tower)
			return (0);
	}
	i = -1;
	while (++i < pos / 4)
	{
		if (tab[i][pos % 4] == tower)
			return (0);
	}
	return (1);
}

int	check_row_left(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (col == 3)
	{
		while (i < 4)
		{
			if (tab[row][i] > max)
			{
				max = tab[row][i];
				count++;
			}
			i++;
		}
		if (col_row[row] != count)
			return (0);
	}
	return (1);
}

int	check_row_right(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (col == 3)
	{
		while (i > -1)
		{
			if (tab[row][i] > max)
			{
				max = tab[row][i];
				count++;
			}
			i--;
		}
		if (col_row[row] != count)
			return (0);
	}
	return (1);
}

int	check_col_down(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (row == 3)
	{
		while (i > -1)
		{
			if (tab[i][col] > max)
			{
				max = tab[i][col];
				count++;
			}
			i--;
		}
		if (col_row[col] != count)
			return (0);
	}
	return (1);
}

int	check_col_up(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (row == 3)
	{
		while (i < 4)
		{
			if (tab[i][col] > max)
			{
				max = tab[i][col];
				count++;
			}
			i++;
		}
		if (col_row[col] != count)
			return (0);
	}
	return (1);
}
