/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:13:49 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/29 22:01:49 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (('0' <= str[i] && str[i] <= '9') || !str[i])
	{
		if (!str[i])
			return (1);
		i++;
	}
	return (0);
}
