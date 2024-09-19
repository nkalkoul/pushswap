/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/19 16:31:00 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_chouf(s_pile *a)
{
	while (a)
	{
		ft_putnbr_fd(a -> content, 1);
		write(1, " ...", 3);
		a = a -> next;
	}
	return ;
}

int	main(int ac, char **av)
{
	int		i;
	int		*tab;
	s_pile	*a;

	a = NULL;
	i = 0;
	if (ac < 2)
		return (write(1, "error", 5));
	if (ft_check(av) == 1)
		return (write(1, "error", 5));
	tab = ft_create_tabs(ac - 1, av + 1);
	a = NULL;
	a = ft_create_pile(a, tab, ac - 1);
	ft_chouf(a);
	return (0);
}
