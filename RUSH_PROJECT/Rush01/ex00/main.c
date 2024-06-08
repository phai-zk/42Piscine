/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asudyodd <asudyodd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 10:35:47 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/02 14:29:02 by asudyodd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/string.h"
#include "lib/solve.h"

int check_input(int argc, char **argv)
{
	if (argc != 2)
	{
		str_print("Please input only 2 arguments :D.\n");
		return (1);
	}	
	else if (str_len(argv[1]) != 31)
	{
		str_print("Please type number after by space.\n");
		return (1);
	}
	else if (count_arg_num(argv[1]))
	{
		str_print("Not correct number and please space between it.\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	frame[4][4];
	int	tab[4][4];

	str_to_matrix("0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", tab);
	if (check_input(argc, argv))
		return (1);
	str_to_matrix(argv[1], frame);
	if (solve(frame, tab, 0))
		print_map(tab);
	else
	{
		str_print("\n!!! ERROR !!! CANT FIND SOLUTION\n");
		print_map(tab);
	}
	return (0);
}
