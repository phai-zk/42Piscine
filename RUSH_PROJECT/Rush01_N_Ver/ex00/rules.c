/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:58:58 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 22:22:58 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rows_left(int **tab, int pos, int n, int *col_row)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % n == n - 1)
	{
		while (i < n)
		{
			if (tab[pos / n][i] > max)
			{
				max = tab[pos / n][i];
				count++;
			}
			i++;
		}
		if (col_row[pos / n] != count)
			return (0);
	}
	return (1);
}

int	rows_right(int **tab, int pos, int n, int *col_row)
{
	int	i;
	int	max;
	int	count;

	i = n - 1;
	max = 0;
	count = 0;
	if (pos % n == i)
	{
		while (i > -1)
		{
			if (tab[pos / n][i] > max)
			{
				max = tab[pos / n][i];
				count++;
			}
			i--;
		}
		if (col_row[pos / n] != count)
			return (0);
	}
	return (1);
}

int	column_down(int **tab, int pos, int n, int *col_row)
{
	int	i;
	int	max;
	int	count;

	i = n - 1;
	max = 0;
	count = 0;
	if (pos / n == i)
	{
		while (i > -1)
		{
			if (tab[i][pos % n] > max)
			{
				max = tab[i][pos % n];
				count++;
			}
			i--;
		}
		if (col_row[pos % n] != count)
			return (0);
	}
	return (1);
}

int	column_up(int **tab, int pos, int n, int *col_row)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / n == n - 1)
	{
		while (i < n)
		{
			if (tab[i][pos % n] > max)
			{
				max = tab[i][pos % n];
				count++;
			}
			i++;
		}
		if (col_row[pos % n] != count)
			return (0);
	}
	return (1);
}
