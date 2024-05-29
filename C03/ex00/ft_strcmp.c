/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:33:59 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/29 15:51:34 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		if (!(s1[i] || s2[i]))
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[] = "gga";
	char s2[] = "ggag";
	printf("%d \n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));    
	return 0;
}
*/
