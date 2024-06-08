/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:33:54 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 02:13:12 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/str.h"
#include "./lib/number.h"
#include "./lib/solve.h"

int	find_n(char *av, int *n)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (av[i] != '\0')
	{
		if ('1' <= av[i] && av[i] <= '9' && i % 2 == 0)
			num++;
		else if (av[i] != ' ')
		{
			str_print("Error! -wrong format\n");
			return (1);
		}
		i++;
	}
	*n = num / 4;
	return (0);
}

int	check_intput(char *av, int *n)
{
	int	len;
	int	i;
	
	len = str_len(av);
	i = 4;
	while (i <= 9)
	{
		if (len == (i * i * 2) - 1)
		{
			find_n(av, n);
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	**frame;
	int	**tab;

	if (argc != 2)
	{
		str_print("Error! -Please input only 2 arguments :D.-\n");
		return (1);
	}
	if (check_intput(argv[1], &n))
	{
		str_print("Error! -Not enough info\n");
		return (1);
	}
	frame = str_to_matrix(argv[1], n);
	tab = set_matrix(n);
	if (solve(frame, tab, 0, n))
		str_print_map(tab, n);
	else
		str_print("Error! -can't find solution :(\n");
	free_all(frame, tab, n);
	return (0);
}
