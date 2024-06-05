/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:55:22 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 18:57:36 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
			if ('0' <= str[num_index] && str[num_index] <= '9')
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

int ft_atoi_base(char *str, char *base)
{
    
}