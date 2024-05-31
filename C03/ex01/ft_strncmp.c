/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:20:55 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/31 15:52:10 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n)
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
	char s1[] = "A2\n";
	char s2[] = "A2\n";
	printf("%d \n", ft_strncmp(s1, s2, 3));    
	printf("%d", strncmp(s1, s2, 3));
	return 0;
}
*/
