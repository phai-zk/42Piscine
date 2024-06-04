/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:30:42 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/04 17:22:26 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	_strlen(char *c)
{
 	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	len = _strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char    dest[10] = "Hello ";
	char    src[10] = "World";
	printf("%s\n", ft_strncat(dest, src, 1));
	// printf("%s", strcat(dest, src));
	return 0;
}
*/