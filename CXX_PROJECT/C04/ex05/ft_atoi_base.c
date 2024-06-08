/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:30:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/06 04:03:31 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_sign(char *str, int *sign, char *base_number)
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
		str++;
	}
	*base_number = *str;
	return (1);
}

int	base_check(char *base, int *base_code)
{
	char	*hex_base;
	int		i;

	hex_base = "0123456789ABCDEF";
	i = 0;
	*base_code = 0;
	while (base[i])
	{
		if (base[i] != hex_base[i])
			return (1);	
		i++;
	}
	*base_code = i;
	return (0);
}

int	is_nb_base(char *str, char *base)
{
	int i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				break;
			j++;	
		}
		if (!base[j])
			return (0);		
		i++;
	}
	return (1);	
}

int ft_atoi_base(char *str, char *base)
{
	int		sign;
	char	*base_number;
	int		base_code;
	int		number;
	int		i;

	if (base_check(base, &base_code))
		return (0);	
	number = 0;
	i = 0;
	if (find_sign(str, &sign, base_number) && is_nb_base(base_number, base))
	{
		while (base_number[i])
		{
			number += base_number[i] - '0';
			if ('A' <= base_number[i] && base_number <= 'F')
				number -= 17;
			number *= base_code;
			i++;
		}
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	printf("%d", ft_atoi_base("01", "01"));
	return 0;
}
