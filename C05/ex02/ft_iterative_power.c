/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 02:30:59 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/08 02:36:57 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	result;
	
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (result);
	while (power > 0)
	{
		result *= nb;
		power--;	
	}
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_iterative_power(10, 3));	
// 	return 0;
// }
