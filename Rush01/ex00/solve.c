/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:37:56 by chinujte          #+#    #+#             */
/*   Updated: 2024/06/01 22:35:30 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/rules.h"
#include <stdio.h>

int solve(int frame[4][4], int tab[4][4], int pos)
{
    int tower;
    
    printf("pos : %d; (%d,%d)\n",pos, pos/4,pos%4);
    if (pos == 16)
        return (1);
    tower = 0;
    while (++tower <= 4)
    {
        if (!(check_double(tab, pos, tower)))
        {
            tab[pos / 4][pos % 4] = tower;
            printf("size : %d\n", tower);
            if (!(check_col_row(tab, pos / 4, pos % 4, frame)))
            {
                if (solve(frame, tab, pos+1))
                    return (1);       
            }
            else
                tab[pos / 4][pos % 4] = 0;
        }
    }
    return (0);
}
