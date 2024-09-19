/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:40:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/09/17 20:45:26 by nkalkoul         ###   ########.fr       */
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
