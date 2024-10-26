/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/24 23:05:33 by nkalkoul         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int		*tab;
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
		return (write(2, "Error", 5));
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
	a = ft_create_pile(a, tab, ac - 1);
	if (ac == 3)
		ft_doubletri(&a);
	else
		ft_start(&a, &b);
	ft_free_pile(a);
	if (b)
		ft_free_pile(b);
}
