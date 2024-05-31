/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 01:41:15 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/31 16:26:59 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1 arbitaary
	2 numeric
	3 get len 
	4 pow
	5 ft_atoi
*/

int is_arbitrary(char str, int *arbitrary)
{
	if (str == '-')
		*arbitrary *= -1;    
	return (str == ' ' || str == '-' || str == '+');
}

int is_numeric(char str)
{
	return ('0' <= str && str <= '9');
}

int str_len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	turn_to_int(char *str)
{
	int	number;
	int	pow;
	int	len;
	int	i;
	int	j;

	number = 0;
	len = str_len(str) - 1;
	i = 0;
	while (str[i])
	{
		j = 0;
		pow = 1;
		while (j < len - i)
		{
			pow *= 10;
			j++;
		}
		number += (str[i] - '0') * pow;
		i++;
	}
	return (number);
}

int ft_atoi(char *str)
{
	char	*nbr;
	int		i;
	int		j;
	int		arbitrary;

	i = 0;
	j = 0;
	arbitrary = 1;
	while (str[i])
	{
		
		if (is_numeric(str[i]))
		{
			nbr[j] = str[i];
			j++;
		}	        
		else if (!(is_arbitrary(str[i], &arbitrary)))
		{
			nbr[j] = '\0';
			return (turn_to_int(nbr) * arbitrary);
		}	
		i++;
	}
	nbr[j] = '\0';
	return (turn_to_int(nbr) * arbitrary);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	int x = ft_atoi(argv[1]);
	printf("%d", x);
	return 0;
}
