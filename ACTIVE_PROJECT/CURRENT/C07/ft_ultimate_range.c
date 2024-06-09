/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 05:17:01 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/10 05:46:59 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	_range;
	int	i;

	*range = 0;
	if (min >= max)
		return (0);
	_range = max - min;
	tab = (int *)malloc(sizeof(int) * _range);
	if (!tab)
		return(-1);
	*range = tab;
	i = 0;
	while (i < _range)
	{
		tab[i] = min + i;
		i++;
	}
	return (_range);
}

// #include <stdio.h>
// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	size;
// 	int	i = 0;

// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&tab, min, max);
// 	while(i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }