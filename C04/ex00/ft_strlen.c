/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:56:12 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/29 23:09:31 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%d\n", strlen("HelloWorld"));
	printf("%d", ft_strlen("HelloWorld"));
	return (0);
}
*/
