/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_tri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nas91 <kalkoul.nassim@gmail.com>           #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 18:48:35 by nas91             #+#    #+#             */
/*   Updated: 2024-10-25 18:48:35 by nas91            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cost(t_pile **a, t_pile **b, t_pile *target)
{
	int	cost;
	int	posa;
	int	posb;

	posa = ft_findtrgpos(ft_trgplacetobe(target, a), a);
	posb = ft_findtrgpos(target, b);
	if (ft_toporbot(posa, a) == 1)
		posa = ft_countpile(*a) - posa;
	if (ft_toporbot(posb, b) == 1)
		posb = ft_countpile(*b) - posb;
	cost = posa + posb;
	return (cost);
}

int	ft_toporbot(int place, t_pile **pl)
{
	if (place <= (ft_countpile(*pl) / 2))
		return (0);
	else
		return (1);
}

t_pile	*ft_bettercost(t_pile **a, t_pile **b)
{
	t_pile	*target;
	t_pile	*bettertarg;

	target = *b;
	bettertarg = target;
	while (target -> next)
	{
		target = target -> next;
		if (ft_cost(a, b, target) < ft_cost(a, b, bettertarg))
			bettertarg = target;
	}
	return (bettertarg);
}

t_pile	*ft_findlow(t_pile **pl)
{
	t_pile	*tmp;
	t_pile	*low;

	tmp = *pl;
	low = tmp;
	while (tmp -> next)
	{
		tmp = tmp -> next;
		if (tmp -> content < low -> content)
			low = tmp;
	}
	return (low);
}

t_pile	*ft_findhigh(t_pile **pl)
{
	t_pile	*tmp;
	t_pile	*high;

	tmp = *pl;
	high = tmp;
	while (tmp -> next)
	{
		tmp = tmp -> next;
		if (tmp -> content > high -> content)
			high = tmp;
	}
	return (high);
}