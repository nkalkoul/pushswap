/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:17:16 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/17 20:39:24 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include "libft/libft.h"

typedef struct s_pile s_pile;
struct s_pile
{
	int				content;
	int				index;
	s_pile	*next;
};

void	swap(s_pile *pl);
size_t	ft_check(char **av);

#endif