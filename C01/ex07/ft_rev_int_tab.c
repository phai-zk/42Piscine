/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:17:25 by chinujte          #+#    #+#             */
/*   Updated: 2024/05/28 09:48:28 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	base;

	i = 0;
	size -= 1;
	while (i < size)
	{
		base = tab[i];
		tab[i] = tab[size];
		tab[size] = base;
		i++;
		size--;
	}
}
