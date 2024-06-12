/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:40:12 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/12 20:26:05 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_separator(str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !check_separator(str[i], sep))
			i++;
	}
	return (count);
}

int	str_len(char *str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && check_separator(str[i], sep))
		i++;
	while (str[i] && !check_separator(str[i], sep))
	{
		i++;
		len++;
	}
	return (len);
}

char	*get_word(char *str, char *sep)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = str_len(str, sep);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (char *)malloc(sizeof(char));
	while (i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;

	i = 0;
	size = word_count(str, charset) + 1;
	tab = (char **)malloc(sizeof(char *) * size);
	if (!tab)
		return (char **)malloc(sizeof(char *));
	while (*str)
	{
		while (*str && check_separator(*str, charset))
			str++;
		if (*str)
		{
			tab[i] = get_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	return (tab); 
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	char	**str;
// 	int		i;
	
// 	if (argc != 3)
// 		return (1);
// 	str = ft_split(argv[1], argv[2]);
// 	i = 0;
// 	while (i < word_count(argv[1], argv[2]))
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	return (0);
// }
