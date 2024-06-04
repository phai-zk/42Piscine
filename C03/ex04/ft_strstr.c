/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:56:33 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/04 18:33:26 by cnzk             ###   ########.fr       */
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
	if (to_find[0] == '\0')
        return str; 
	while (*str)
	{
		if (str[0] == to_find[0])
			return (check(str, to_find));
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char	str[] = "Hello World NaJa";
	char	tofind[] = "";
	char	*find = ft_strstr(str, tofind);
	printf("%s", find);
	return 0;
}
