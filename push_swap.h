/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:17:16 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/19 16:31:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include "libft/libft.h"

typedef struct s_pile
{
	int				content;
	struct s_pile	*next;
}					s_pile;

void	ft_swap(s_pile *pl);
size_t	ft_check(char **av);
int		*ft_create_tabs(int ac, char **av);
s_pile	*ft_create_pile(s_pile *stack, int *tab, int ac);
#endif
