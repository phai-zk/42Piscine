/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:41:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 14:54:58 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	get_basic_prime(int basic_prime[6])
{
	basic_prime[0] = 2;
	basic_prime[1] = 3;
	basic_prime[2] = 5;
	basic_prime[3] = 7;
	basic_prime[4] = 11;
	basic_prime[5] = 19;
	basic_prime[6] = 0;
}

int	ft_is_prime(int nb)
{
	int	basic_prime[7];
	int	check;
	int	i;

	if (nb < 2)
		return (0);
	get_basic_prime(basic_prime);
	i = -1;
	check = 0;
	while (basic_prime[++i])
	{
		if (nb == basic_prime[i])
			return (1);
		if (nb % basic_prime[i] != 0)
			check++;
	}
	return (check == 6);
}

int	ft_find_next_prime(int nb)
{
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
