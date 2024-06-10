/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 06:38:00 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/11 06:55:59 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;

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

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int	i;
	
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * ac);
	if (!tab)
		return (0);
	i = 0;
	while (++i < ac)
	{
		tab[i - 1].size = str_len(av[i]);
		tab[i - 1].str = av[i];
		tab[i - 1].copy = ft_strdup(av[i]);
	}
	tab[i - 1].str = 0;
	return tab;
}

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}