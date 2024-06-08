/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:05:23 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 15:24:18 by chinujte         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	len_d = _strlen(dest);
	len_s = _strlen(src);
	if (size <= len_d)
		return (size + len_s);
	while (src[i] && i + len_d + 1 < size)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[] = "Hello";
	char src[] = "World";
	unsigned int l = ft_strlcat(dest, src, 11);

	printf("%d %s", l, dest);
	return 0;
}
*/
