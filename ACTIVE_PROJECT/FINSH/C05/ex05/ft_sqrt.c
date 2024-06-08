/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:32:51 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 14:40:07 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

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

// #include <stdio.h>
// int main()
// {
//     printf("%d", ft_sqrt(25000000));
//     return (0);   
// }
