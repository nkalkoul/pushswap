/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:31:40 by nas91             #+#    #+#             */
/*   Updated: 2024/10/24 00:22:55 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tripletri(t_pile **a)
{
	int	first;
	int	mid;
	int	last;

	first = (*a) -> content;
	mid = (*a) -> next -> content;
	last = (*a) -> next -> next -> content;
	if (last > mid && last > first)
		{
			if (first > mid)
				sa(a);
		}
	if (first > mid && first > last)
	{
		ra(a);
		if (mid > last)
			sa(a);
	}
	if (mid > first && mid > last)
	{
		rra(a);
		if (last > first)
			sa(a);
	}
}

void	ft_doubletri(t_pile **a)
{
	int	first;
	int	last;

	first = (*a) -> content;
	last = (*a) -> next -> content;
	if (first > last)
		sa(a);
}

