/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 19:05:23 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/29 19:16:39 by chinujte         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	len;

	i = 0;
	len = _strlen(dest);
	while (src[i] && i < size)
	{
		dest[len + i] = src[i];
		i++;		
	}
	return ((unsigned int)len + i);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[] = "Hello";
	unsigned int l = ft_strlcat(dest, "World",10);

	printf("%d %s", l, dest);
	return 0;
}
*/
