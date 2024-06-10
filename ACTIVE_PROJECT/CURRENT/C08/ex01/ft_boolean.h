/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnzk <cnzk@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 05:48:23 by cnzk              #+#    #+#             */
/*   Updated: 2024/06/11 06:36:56 by cnzk             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef	enum t_bool
{
	true = 1,
	false = 0,
}	t_bool;

# define	TRUE true
# define	FALSE false
# define	EVEN(nb) (nb % 2 == 0)
# define	EVEN_MSG "I have an even number of arguments."
# define	ODD_MSG "I have an odd number of arguments."
# define	SUCCESS 0

#endif