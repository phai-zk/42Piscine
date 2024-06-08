/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:06:25 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 13:37:10 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_duplicate(int tab[4][4], int pos, int tower);
int	check_row_left(int tab[4][4], int row, int col, int col_row[4]);
int	check_row_right(int tab[4][4], int row, int col, int col_row[4]);
int	check_col_down(int tab[4][4], int row, int col, int col_row[4]);
int	check_col_up(int tab[4][4], int row, int col, int col_row[4]);
