/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:35:30 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/10 03:26:32 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);		
}

char *ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = str_len(src);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return ("\0");
	i = 0;
	while (src[i])
	{
		dest[i] = src[i]; 
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*str;
// 	char	*allocated;

// 	str = "Hello World with malloc()";
// 	printf("original  : base  : $%s$ @ %p\n", str, str);
// 	allocated = strdup(str);
// 	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
// 	allocated = ft_strdup(str);
// 	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
// 	return (0);
// }
