/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:17:16 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/10/03 19:28:37 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include "libft/libft.h"
#include <limits.h>

typedef struct s_pile
{
	int				content;
	struct s_pile	*next;
}					t_pile;

void	ft_swap(t_pile *pl);
size_t	ft_check(char **av);
int		*ft_create_tabs(int ac, char **av);
t_pile	*ft_create_pile(t_pile *stack, int *tab, int ac);
void	ft_free_pile(t_pile *pl);
int		ft_strdlen(char **str);
void	ft_freedouble(char **str);
void	ft_push(t_pile **src, t_pile **dest);
void	ft_rotate(t_pile **pl);
void	ft_revrotate(t_pile **pl);
void	sa(t_pile **a);
void	sb(t_pile **b);
void	pa(t_pile **a, t_pile **b);
void	pb(t_pile **a, t_pile **b);
void	ra(t_pile **a);
void	rb(t_pile **b);
void	rra(t_pile **a);
void	rrb(t_pile **b);
void	ss(t_pile **a, t_pile **b);
void	rr(t_pile **a, t_pile **b);
void	rrr(t_pile **a, t_pile **b);

//utilitaire
void	ft_chouf(t_pile *a);

#endif
