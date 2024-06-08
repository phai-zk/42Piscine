/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:58:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 21:10:30 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	if (nb <= 0)
		return (0);
	result = 0;
	while (nb != result * result)
	{
		if (nb < result * result)
			return (0);
		result++;
	}
	return (result);
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
