/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:04:54 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/10 22:23:08 by chinujte         ###   ########.fr       */
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
	*size = i;
	return (len - sep_len);	
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;
	
	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	dest = (char *)malloc(str_full_len(&size, strs, sep) + 1);
	if (!dest)
		return (0);
	i = -1;
	k = 0;
	while (i < str_full_len(&size, strs, sep) && k < size)
	{
		j = -1;
		while (sep[++j] && i > 0)
			dest[++i] = sep[j];
		j = -1;
		while (strs[k][++j])
			dest[++i] = strs[k][j];
		k++;
	}
	dest[++i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*strs[] = {"1World", "Hwllo", "\r","fiuytfgui6543","dasadasd"};
	char	*sep = "";
	char	*str;
	str = ft_strjoin(9, strs, sep);
	printf("%s", str);
	return	(0);
}