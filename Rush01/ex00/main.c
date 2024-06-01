/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 10:35:47 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/01 21:52:57 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/string.h"
#include "lib/solve.h"

int	main(int argc, char **argv)
{
	int	frame[4][4];
	int	tab[4][4];

	str_to_matrix("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", tab);
	if (argc != 2)
		return (1);
	if (str_len(argv[1]) != 31 && is_numberic(argv[1][0]))
		return (1);
	str_to_matrix(argv[1], frame);
	if (solve(frame, tab, 0))
		print_map(tab);
	else
	{
		print_map(tab);
		print("\nCant be slove!\n");
	}
	return (0);
}
