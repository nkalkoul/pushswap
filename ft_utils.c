/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:07:32 by nas91             #+#    #+#             */
/*   Updated: 2024/10/24 20:06:27 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strdlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_freedouble(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

int	ft_countpile(t_pile *pile)
{
	t_pile *current;
	int		i;

	current = pile;
	i = 0;
	while (current)
	{
		i++;
		current = current -> next;
	}
	return (i);
}

 int	ft_cost(t_pile *target, )