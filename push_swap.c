/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:59:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/08 18:35:08 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
		return (write(1, "error", 5));
	if (ft_check(av) == 0)
		return (write(1, "trie mtn", 21));
	return (0);
}