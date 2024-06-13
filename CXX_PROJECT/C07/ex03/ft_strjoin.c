/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:04:54 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/12 15:49:13 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	str_full_len(int *size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	len;

	i = 0;
	len = 0;
	sep_len = str_len(sep);
	while (i < *size)
	{
		len += str_len(strs[i]);
		len += sep_len;
		i++;
	}
	return (len - sep_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = str_len(dest);
	i = 0;
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	dest = (char *)malloc(str_full_len(&size, strs, sep) + 1);
	if (!dest)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
	}
	return (dest);
}

// int main(void)
// {
// 	char *strs[] = {"Hello", "World","\f", "This is", "C"};
// 	char *sep = " ";
// 	char *str;
// 	str = ft_strjoin(5, strs, sep);
// 	printf("%s", str);
// 	return (0);
// }		