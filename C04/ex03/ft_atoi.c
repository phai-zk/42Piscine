/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 01:41:15 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/05 17:56:37 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
- ignore space
- get sign
- after sign shouldn't space
- get pos of start num && end num
- turn num to int
- int num * sign
*/

int	find_sign(char *str, int *sign, int *index)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		if ((str[i] == '-' || str[i] == '+') && str[i + 1] == ' ')
			return (0);
		i++;
	}
	*index = i;
	return (1);
}

int	is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num_index;
	int	number;
	int	pow;

	number = 0;
	pow = 0;
	if (find_sign(str, &sign, &num_index))
	{
		while (str[num_index])
		{
			if (is_numeric(str[num_index]))
			{
				number *= pow * 10;
				number += str[num_index] - 48;
			}
			else
				return (number * sign);
			pow++;
			num_index++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d", ft_atoi(argv[1]));
	return 0;
}
*/
