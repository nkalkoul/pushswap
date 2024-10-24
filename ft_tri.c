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

void	ft_start(t_pile **a, t_pile **b)
{
	int	i;

	i = 0;
	pb(&a, &b);
	pb(&a, &b);
	if ((*b)-> content < (*b) -> next -> content)
		sb(b);
	ft_costop(a, b);
}

int	ft_comparetarget(t_pile *tmp, t_pile *target)
{
	int	i;

	i = 1;
	while (tmp)
	{
		if (target -> content > tmp -> content)
			break ;
		tmp = tmp -> next;
		i++;
	}
	return (i);
}

int	ft_costop(t_pile **b, t_pile **a)
{
	int posa;
	int costop;
	int	posb;
	t_pile	*target;
	t_pile	*tmp;
	
	posa = 1;
	costop = 0;
	target = *a;
	tmp = *b;
	costop = ft_comparetarget(tmp, target); + posa;
	posb = ft_comparetarget(tmp, target);
	while (target)
	{
		
		target = target -> next;
		posa++;
		if (ft_comparetarget(tmp, target) + posa < costop)
		{
			costop = ft_comparetarget(tmp, target) + posa;
			posb = ft_comparetarget(tmp, target);
		}
	}
}
