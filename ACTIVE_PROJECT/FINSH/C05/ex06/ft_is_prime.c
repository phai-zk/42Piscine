/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:58:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 21:42:32 by chinujte         ###   ########.fr       */
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

int	ft_sqrt(int nb)
{
	long	result;

	result = 0;
	while (nb != result * result)
	{
		if (nb < result * result)
			return (result - 1);
		result++;
	}
	return (result);
}

int	ft_is_prime(int nb)
{
	int	root;

	root = ft_sqrt(nb);
	if (root != 0)
		return (0);
	
	while ()
	{
		/* code */
	}
	
	return (0);
}
