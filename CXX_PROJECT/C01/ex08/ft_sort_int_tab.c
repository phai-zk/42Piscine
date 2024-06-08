/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:45:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/08 17:58:56 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	base;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				base = tab[i];
				tab[i] = tab[j];
				tab[j] = base;
			}
			j++;
		}
		i++;
	}
}


int main()
{
	int i[] = {85, 54, 55, 56};
	ft_sort_int_tab(i, 4);
	return 0;
}
