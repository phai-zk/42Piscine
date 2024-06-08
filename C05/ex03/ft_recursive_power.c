/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 02:30:59 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/08 02:39:37 by cnzk             ###   ########.fr       */
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
    result = nb * ft_iterative_power(nb, power - 1);
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_iterative_power(2, 0));	
// 	return 0;
// }
