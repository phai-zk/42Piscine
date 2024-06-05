/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:56:33 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/05 14:29:31 by chinujte         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = _strlen(dest);
	i = 0;
	while (src[i])
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
int main(int argc, char const *argv[])
{
	char    dest[20] = "Hello ";
	char    src[20] = "World";
	printf("%s\n", ft_strcat(dest, src));
	// printf("%s", strcat(dest, src));
	return 0;
}
*/
