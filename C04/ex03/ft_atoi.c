/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 00:50:07 by cnzk              #+#    #+#             */
/*   Updated: 2024/05/30 01:21:48 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int x = ft_atoi(argv[1]);
	printf("%d",x);
	return (0);
}
