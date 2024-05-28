/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:13:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/28 18:08:23 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (('A' <= str[i] && str[i] <= 'z') || !str[i])
	{
		if (!str[i])
			return (1);
		if ('Z' < str[i] && str[i] < 'a')
			return (0);
		i++;
	}
	return (0);
}