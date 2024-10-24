/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:46:35 by nas91             #+#    #+#             */
/*   Updated: 2024/10/21 19:51:31 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_pile **b)
{
	ft_swap(*b);
	ft_putstr_fd("sb\n", 1);
}

void	pa(t_pile **a, t_pile **b)
{
	ft_push(b, a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_pile **a, t_pile **b)
{
	ft_push(a, b);
	ft_putstr_fd("pb\n", 1);
}

void	ra(t_pile **a)
{
	ft_rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_pile **b)
{
	ft_rotate(b);
	ft_putstr_fd("rb\n", 1);
}

