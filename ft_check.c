/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:03:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/08 18:52:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(char **av, int i, int nbr)
{
	i++;
	while (av[i])
	{
		if (nbr == ft_atoi(av[i]))
			return (1);
		i++;	
	}
	return (0);
}
int	ft_check_cara(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] != '-' && (av[i] < '0' || av[i] > '9'))
			return (1);
		if (av[i] == '-')
		{
			if (av[i + 1] < '0' || av[i + 1] > '9')
				return (1);
		}
		i++;
	}
	return (0);
}
size_t	ft_check(char **av)
{
	int	i;
	long nbr;

	i = 1;

	while (av[i])
	{
		nbr = ft_atoi(av[i]);
		if (nbr < -2147483648 || nbr > 2147483647)
			return (1);
		if (ft_check_cara(av[i]) == 1)
			return (1);
		if (ft_check_double(av, i, nbr) == 1)
			return (1);
		i++;
	}
	return (0);
}
