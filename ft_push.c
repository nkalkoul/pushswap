/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:17:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/21 18:08:32 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(s_pile *pl)
{
	int	temp;
	temp = pl -> content;
	pl -> content = pl -> next -> content;
	pl -> next -> content = temp;
}

/*void	ft_push(s_pile *src, s_pile dest)
{
	s_pile	*temp;

	
}*/