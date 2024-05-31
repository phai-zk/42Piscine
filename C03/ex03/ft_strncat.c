/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:30:42 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/31 18:01:47 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = _strlen(dest);
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    dest[15] = "Hello";
	char    src[15] = "World";
	printf("%s\n", ft_strncat(dest, src, 1));
	// printf("%s", strcat(dest, src));
	return 0;
}
*/