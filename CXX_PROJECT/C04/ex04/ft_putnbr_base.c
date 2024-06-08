/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:14:03 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/07 17:21:30 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base, int *base_number)
{
	char	*hex_base;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	*base_number = 0;
	while (base[i])
	{
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
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

int	main(void)
{
	// ft_putnbr_base(-12, "01");
	// printf("\n");
	// ft_putnbr_base(-40, "poneyvif");
	// printf("\n");
	// ft_putnbr_base(894867, "+0123456789");
	// printf("\n");
	ft_putnbr_base(12, "0123456789ABCDEF");
}
