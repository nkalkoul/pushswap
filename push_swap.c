/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/17 13:16:36 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		*tab;

	i = 0;
	if (ac < 2)
		return (write(1, "error", 5));
	if (ft_check(av) == 1)
		return (write(1, "error", 5));
	tab = ft_create_tabs(ac - 1, av + 1);
	return (0);
}
