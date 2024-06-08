/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 02:30:59 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/08 18:57:28 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (result);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_recursive_power(2, 8));	
// 	return 0;
// }
