/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 06:38:00 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/12 15:34:13 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./ft_stock_str.h"

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	i = -1;
	while (++i < ac)
	{
		tab[i].size = str_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int					index;
// 	struct s_stock_str	*structs;

// 	structs = ft_strs_to_tab(argc, argv);
// 	index = 0;
// 	while (index < argc)
// 	{
// 		printf("%d\n", index);
// 		printf("\t| og : $%s$ %p\n", structs[index].str, structs[index].str);
// 		printf("\t| cp : $%s$ %p\n", structs[index].copy, structs[index].copy);
// 		printf("\t| size : %d\n", structs[index].size);
// 		index++;
// 	}
// }

// #ifndef FT_STOCK_STR_H
// # define FT_STOCK_STR_H

// typedef struct s_stock_str
// {
// 	int			size;
// 	char		*str;
// 	char		*copy;
// }	t_stock_str;

// #endif