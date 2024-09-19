/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:40:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/19 16:31:33 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_create_tabs(int ac, char **av)
{
	int	*newt;
	int i;

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


s_pile	*ft_add_pile(s_pile *stack, int x)
{
	s_pile	*new;

	new = malloc(sizeof(s_pile));
	if (!new)
		return (NULL);
	new -> content = x;
	new -> next = stack;
	printf(".\n");
	return (new);
}

s_pile	*ft_create_pile(s_pile *stack, int *tab, int ac)
{
	int		i;

	i = 0;
	while (i < ac)
	{
		stack = ft_add_pile(stack, tab[i]);
		i++;
	}
	return (stack);
}