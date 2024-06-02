/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:45:03 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 20:02:24 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rows_left(int **tab, int pos, int n, int *col_row);
int	rows_right(int **tab, int pos, int n, int *col_row);
int	column_down(int **tab, int pos, int n, int *col_row);
int	column_up(int **tab, int pos, int n, int *col_row);