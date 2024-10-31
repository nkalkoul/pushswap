/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/31 21:06:33 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chouf(t_pile *a)
{
	while (a)
	{
		ft_putnbr_fd(a -> content, 1);
		write(1, " ...", 3);
		a = a -> next;
	}
	write (1, "\n", 1);
	return ;
}

int	ft_if_is_order(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	**new;

	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		new = ft_split(av[1], ' ');
		if (!new[0])
			return (free(new), 0);
		ac = ft_strdlen(new) + 1;
	}
	else
		new = &av[1];
	if (ft_check(new) == 1)
	{	if (!av[2])
			ft_freedouble(new);
		return (write(2, "Error\n", 6));
	}
	ft_dothetri(ac, new);
	if (!av[2])
		ft_freedouble(new);
	return (0);
}

void	ft_dothetri(int ac, char **new)
{
	t_pile	*a;
	t_pile	*b;
	int		*tab;

	a = NULL;
	b = NULL;
	tab = ft_create_tabs(ac - 1, new);
	if (ft_if_is_order(tab, ac - 1) == 0)
		return (free(tab));
	a = ft_create_pile(a, tab, ac - 1);
	if (ac == 3)
		ft_doubletri(&a);
	else
		ft_start(&a, &b);
	ft_free_pile(a);
	if (b)
		ft_free_pile(b);
}
