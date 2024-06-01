/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:06:38 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/01 18:11:59 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print(char *str);
int		str_len(char *str);
int		is_numberic(char str);
void	str_to_matrix(char *str, int matrix[4][4]);
void	print_map(int i[4][4]);
