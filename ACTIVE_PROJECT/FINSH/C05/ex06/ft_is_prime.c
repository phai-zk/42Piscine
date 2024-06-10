/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:58:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/10 16:51:19 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sqrt(int nb, int *result)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (nb != i * i)
	{
		if (nb < i * i)
		{
			*result = i - 1;
			return (0);
		}
		i++;
	}
	*result = i;
	return (1);
}

int	ft_is_prime(int nb)
{
	int	root;

	if (check_sqrt(nb, &root))
		return (0);
	while (root < nb)
	{
		if (root > 1 && nb % root == 0)
			return (0);
		root++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int i;

// 	i = 0;
// 	while (++i < 1000)
// 	{
// 		if (ft_is_prime(i))
// 			printf("%d is prime\n", i);
// 	}
// 	return 0;
// }
