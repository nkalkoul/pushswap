/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:17:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/03 19:41:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(s_pile *pl)
{
	int	temp;

	if (!pl)
		return ;
	temp = pl -> content;
	pl -> content = pl -> next -> content;
	pl -> next -> content = temp;
}

void	ft_push(s_pile **src, s_pile **dest)
{
	s_pile	*temp;

	if (*src == NULL)
		return ;
	temp = *src; // récupère le premier élément de la pile source
	*src = (*src)->next; // avance la pile source au prochain élément
	temp->next = *dest; // place l'ancien premier élément de source en haut de dest
	*dest = temp; // met à jour dest pour pointer vers le nouvel élément
	
}

void	ft_rotate(s_pile **pl)
{
	s_pile	*temp; 
	s_pile 	*current;
	s_pile *head;
	
	current = (*pl);
	head = current->next;
	temp = (*pl);
	(*pl) = head;
	while (current->next)
	{
		current = current->next;
	}
	temp->next = NULL;
	current->next = temp;
	
}
