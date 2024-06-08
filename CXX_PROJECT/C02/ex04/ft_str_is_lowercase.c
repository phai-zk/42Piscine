/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:13:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/28 18:12:33 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (('a' <= str[i] && str[i] <= 'z') || !str[i])
	{
		if (!str[i])
			return (1);
		i++;
	}
	return (0);
}
