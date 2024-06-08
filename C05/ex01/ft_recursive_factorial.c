/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 01:16:59 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/08 02:28:37 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	if (nb == 0)
		return (result);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_factorial(0));
	return 0;
}
