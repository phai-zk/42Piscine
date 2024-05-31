/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:56:33 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/31 15:53:18 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*check(char *str, char *find)
{
	int	i;

	i = 0;
	while (find[i])
	{
		if (str[i] != find[i])
			return (0);
		i++;
	}
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (str[0] == to_find[0])
			return (check(str, to_find));
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "Hello World NaJa";
	char	tofind[] = "World";
	printf("%s", ft_strstr(str, tofind));
	return 0;
}
*/
