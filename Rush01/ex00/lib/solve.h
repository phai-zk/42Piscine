/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:36:18 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 13:41:21 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	solve(int frame[4][4], int tab[4][4], int pos);
int	check_col_row(int tab[4][4], int row, int col, int col_row[4][4]);