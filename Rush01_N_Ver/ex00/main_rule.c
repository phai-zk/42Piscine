/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rule.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:19:01 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 22:23:15 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/rules.h"

int	find_duplicate(int **tab, int row, int col, int tower)
{
	int	i;

	i = -1;
	while (++i < col)
	{
		if (tab[row][i] == tower)
			return (0);
	}
	i = -1;
	while (++i < row)
	{
		if (tab[i][col] == tower)
			return (0);
	}
	return (1);
}

int	check_col_row(int **tab, int pos, int n, int **frame)
{
	if (!(rows_left(tab, pos, n, frame[2])))
		return (0);
	if (!(rows_right(tab, pos, n, frame[3])))
		return (0);
	if (!(column_down(tab, pos, n, frame[1])))
		return (0);
	if (!(column_up(tab, pos, n, frame[0])))
		return (0);
	return (1);
}
