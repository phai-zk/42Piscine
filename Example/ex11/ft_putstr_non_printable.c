/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:33:51 by winaung           #+#    #+#             */
/*   Updated: 2024/05/28 19:16:58 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_chr_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
	{
		return (0);
	}
}

void	print_hex_val(char c)
{
	char	*hexa_chars;

	hexa_chars = "0123456789abcdef";
	ft_putchar(hexa_chars[c / 16]);
	ft_putchar(hexa_chars[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_chr_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			write(1, "\\", 1);
			print_hex_val(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}