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
	t_pile	*current;
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

int	ft_findtrgpos(t_pile *target, t_pile **pl)
{
	int		i;
	t_pile	*flip;

	flip = *pl;
	i = 0;
	while (target != flip)
	{
		flip = flip -> next;
		i++;
	}
	return (i);
}

t_pile	*ft_trgplacetobe(t_pile *target, t_pile **pl)
{
	t_pile	*tmp;
	t_pile	*placetobe;

	if (ft_findhigh(pl)-> content < target -> content)
		return (ft_findlow(pl));
	placetobe = ft_findhigh(pl);
	tmp = *pl;
	while (tmp)
	{
		if (tmp -> content > target -> content
			&& placetobe -> content > tmp -> content)
			placetobe = tmp;
		tmp = tmp -> next;
	}
	return (placetobe);
}
