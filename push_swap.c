/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/03 19:25:16 by nkalkoul         ###   ########.fr       */
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

// int	main(int ac, char **av)
// {
// 	int		i;
// 	int		*tab;
// 	s_pile	*a;
// 	s_pile	*b;
// 	char	**new;

// 	a = NULL;
// 	i = 0;
// 	if (ac < 2)
// 		return (write(1, "error", 5));
// 	if (ac == 2)
// 	{
// 		new = ft_split(av[1], ' ');
// 		if (!new[1])
// 			return (free(new), write(1, "error", 5));
// 		ac = ft_strdlen(new) + 1;
// 	}
// 	else
// 		new = &av[1];
// 	if (ft_check(new) == 1)
// 		return (write(1, "error", 5));
// 	tab = ft_create_tabs(ac - 1, new);
// 	a = NULL;
// 	b = NULL;
// 	a = ft_create_pile(a, tab, ac - 1);
// 	write(1, "pile cree a = ", 15);
// 	ft_chouf(a);
// 	write(1, "\n", 1);
// 	ft_swap(a);
// 	write(1, "swap fais, a = ", 16);
// 	ft_chouf(a);
// 	ft_push(&a, &b);
// 	write(1, "\npush fais, a = ",17);
// 	ft_chouf(a);
// 	write(1, "\n b = ", 5);
// 	ft_chouf(b);
// 	/*ft_rotate(&a);
// 	write(1,"rotate fais maintenant a=", 26);
// 	ft_chouf(a);
// 	ft_free_pile(a);
// 	if (!av[2])
// 		ft_freedouble(new);*/
// 	return (0);
// }
