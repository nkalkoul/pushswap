/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:17:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/19 12:15:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(s_pile *pl)
{
	int	temp;

	if (pl == NULL)
		return;
	temp = pl -> content;
	pl -> content = pl -> next -> content;
	pl -> next -> content = temp;	
}
