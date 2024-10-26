/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:21:56 by nas91             #+#    #+#             */
/*   Updated: 2024/10/21 19:51:04 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_pile **a)
{
	ft_revrotate(a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_pile **b)
{
	ft_revrotate(b);
	ft_putstr_fd("rrb\n", 1);
}

void	ss(t_pile **a, t_pile **b)
{
	ft_swap(*a);
	ft_swap(*b);
	ft_putstr_fd("ss`\n", 1);
}

void	rr(t_pile **a, t_pile **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd("rr\n", 1);
}

void	rrr(t_pile **a, t_pile **b)
{
	ft_revrotate(a);
	ft_revrotate(b);
	ft_putstr_fd("rrr\n", 1);
}
