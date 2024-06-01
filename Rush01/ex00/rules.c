/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:40:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/01 22:42:45 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/string.h"
#include <stdio.h>

int check_double(int tab[4][4], int pos, int tower)
{
	int	i;

	i = -1;
	while (++i < pos % 4)
    {
		if (tab[pos/4][i] == tower)
            return (0);
    }	
    i = -1;
    while (++i < pos / 4)
    {
        if (tab[i][pos%4] == tower)
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
	
	print_map(tab);
	print("\n");
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
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	
	print_map(tab);
	print("\n");
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
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	
	print_map(tab);
	print("\n");
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
			return (1);
	}
	return (0);
}

int	check_col_up(int tab[4][4], int row, int col, int col_row[4])
{
	int	i;
	int	max;
	int	count;
	
	i = 0;
	max = 0;
	count = 0;
	print_map(tab);
	print("\n");
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
			return (1);
	}
	return (0);
}

int check_col_row(int tab[4][4], int row, int col, int col_row[4][4])
{
    if (check_row_left(tab, row, col, col_row[2]))
	{
		print("\nrow l\n");
		return (1);
	}
	if (check_row_right(tab, row, col, col_row[3]))
	{
		print("\nrow r\n");
		return (1);
	}
	if (check_col_down(tab, row, col, col_row[1]))
	{
		print("\ncol d\n");
		return (1);
	}
	if (check_col_up(tab, row, col, col_row[0]))
	{
		print("\ncol up\n");
		return (1);
	}
	print("\nhere error\n");
	return (0);
}
