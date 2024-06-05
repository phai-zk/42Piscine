/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:14:03 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 18:43:13 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base, int *base_number)
{
	char	*hex_base;
	int		i;

	hex_base = "0123456789ABCDEF";
	i = 0;
	*base_number = 0;
	while (base[i])
	{
		if (base[i] != hex_base[i])
			return (0);	
		i++;
	}
	*base_number = i;
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	turn_to_base(int nbr, int base, char *base_code)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < base)
		ft_putchar(base_code[nbr]);
	if (nbr >= base)
	{
		turn_to_base(nbr / base, base, base_code);
		turn_to_base(nbr % base, base, base_code);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_number;
	
	if (base_check(base, &base_number))
	{
		turn_to_base(nbr, base_number, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(-10, "0123456789ABCDEF");
	return (0);
}
*/