/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:17:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/23 23:10:39 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_pile *pl)
{
	int	temp;

	if (!pl)
		return ;
	temp = pl -> content;
	pl -> content = pl -> next -> content;
	pl -> next -> content = temp;
}

void	ft_push(t_pile **src, t_pile **dest)
{
	t_pile	*temp;

	if (*src == NULL)
		return ;
	temp = *src;
	*src = (*src)-> next;
	temp -> next = *dest;
	*dest = temp;
}

void	ft_rotate(t_pile **pl)
{
	t_pile	*temp;
	t_pile	*head;

	if (!(*pl) || !(*pl)-> next)
		return ;
	temp = *pl;
	head = *pl;
	while (temp -> next != NULL)
		temp = temp -> next;
	*pl = (*pl)-> next;
	temp -> next = head;
	temp -> next ->next = NULL;
}

void	ft_revrotate(t_pile **pl)
{
	t_pile	*temp;
	t_pile	*last;

	if (!(*pl) || !(*pl)-> next)
		return ;
	temp = *pl;
	last = *pl;
	while (last -> next)
	{
		temp = last;
		last = last -> next;
	}
	temp -> next = NULL;
	last -> next = (*pl);
	(*pl) = last;
}

void	sa(t_pile **a)
{
	ft_swap(*a);
	ft_putstr_fd("sa\n", 1);
}
