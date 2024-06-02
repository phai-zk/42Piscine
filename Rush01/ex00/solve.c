/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:37:56 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 13:40:46 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/rules.h"
#include "lib/string.h"

int	check_col_row(int tab[4][4], int row, int col, int frame[4][4])
{
	if (!(check_row_left(tab, row, col, frame[2])))
		return (0);
	if (!(check_row_right(tab, row, col, frame[3])))
		return (0);
	if (!(check_col_down(tab, row, col, frame[1])))
		return (0);
	if (!(check_col_up(tab, row, col, frame[0])))
		return (0);
	return (1);
}

int	solve(int frame[4][4], int tab[4][4], int pos)
{
	int	tower;

	if (pos == 16)
		return (1);
	tower = 0;
	while (++tower <= 4)
	{
		if (find_duplicate(tab, pos, tower))
		{
			tab[pos / 4][pos % 4] = tower;
			if (check_col_row(tab, pos / 4, pos % 4, frame))
			{
				if (solve(frame, tab, pos + 1))
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}
