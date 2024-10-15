/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:40:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/01 14:09:22 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_create_tabs(int ac, char **av)
{
	int		*newt;
	int		i;

	i = 0;
	if (!av)
		return (NULL);
	newt = malloc(sizeof(int) * ac);
	if (!newt)
		return (NULL);
	while (av[i])
	{
		newt[i] = ft_atoi(av[i]);
		i++;
	}
	return (newt);
}

t_pile	*ft_addfront_pile(t_pile *stack, int x)
{
	t_pile	*new;

	new = malloc(sizeof(t_pile));
	if (!new)
		return (NULL);
	new -> content = x;
	new -> next = stack;
	return (new);
}

t_pile	*ft_create_pile(t_pile *stack, int *tab, int ac)
{
	while (ac != 0)
	{
		stack = ft_addfront_pile(stack, tab[ac - 1]);
		if (stack == NULL)
			return (free(tab), ft_free_pile(stack), NULL);
		ac--;
	}
	return (free(tab), stack);
}

void	ft_free_pile(t_pile *pl)
{
	t_pile	*temp;

	while (pl != NULL)
	{
		temp = pl -> next;
		free(pl);
		pl = temp;
	}
	pl = NULL;
}
