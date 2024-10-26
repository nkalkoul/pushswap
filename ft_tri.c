/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:31:40 by nas91             #+#    #+#             */
/*   Updated: 2024/10/25 01:19:33 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_tripletri(t_pile **a)
{
	int	first;
	int	mid;
	int	last;

	first = (*a)-> content;
	mid = (*a)-> next -> content;
	last = (*a)-> next -> next -> content;
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

	first = (*a)-> content;
	last = (*a)-> next -> content;
	if (first > last)
		sa(a);
}

void	ft_start(t_pile **a, t_pile **b)
{
	int		i;
	t_pile	*target;
	t_pile	*low;

	i = 0;
	while (ft_countpile(*a) > 3)
		pb(a, b);
	ft_tripletri(a);
	while (*b)
	{
		target = ft_bettercost(a, b);
		ft_rotatefb(b, target);
		ft_rotatefa(a, target);
		pa(a, b);
	}
	low = ft_findlow(a);
	while (low != (*a))
	{
		if (ft_toporbot(ft_findtrgpos(low, a), a) == 0)
			ra(a);
		else
			rra(a);
	}
}

void	ft_rotatefb(t_pile **b, t_pile *target)
{
	if (ft_toporbot(ft_findtrgpos(target, b), b) == 0)
	{
		while (*b != target)
			rb(b);
	}
	else
	{
		while (*b != target)
			rrb(b);
	}
}

void	ft_rotatefa(t_pile **a, t_pile *target)
{
	t_pile	*placetobe;
	int		posa;

	placetobe = ft_trgplacetobe(target, a);
	posa = ft_findtrgpos(placetobe, a);
	if (ft_toporbot(posa, a) == 0)
	{
		while (*a != placetobe)
			ra(a);
	}
	else
	{
		while (*a != placetobe)
			rra(a);
	}
}