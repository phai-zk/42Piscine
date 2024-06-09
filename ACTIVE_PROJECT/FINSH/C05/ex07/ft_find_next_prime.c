/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:41:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/09 18:34:45 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_sqrt(int nb, int *result)
{
	long i;

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

int ft_is_prime(int nb)
{
	int root;

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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int i;

// 	i = 0;
// 	while (i <= 100)
// 	{
// 		printf("%d next prime is %d\n",i ,ft_find_next_prime(i));
// 		i++;
// 	}
// 	return (0);
// }
