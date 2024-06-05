/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 21:30:24 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 22:16:05 by chinujte         ###   ########.fr       */
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
	*base_number = str;
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

int	is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int ft_atoi_base(char *str, char *base)
{
	int		sign;
	char	*base_number;
	int		base_code;
	int		number;

	if (base_check(base, &base_code))
		return (0);	
	number = 0;
	if (find_sign(str, &sign, base_number))
	{
		
	}
	return (0);
}