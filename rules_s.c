/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:25:07 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:32:55 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list	**sw_a)
{
	t_list	*tmp;

	tmp = *sw_a;
	if (!tmp || !(tmp->next))
		return ;
	*sw_a = (*sw_a)->next;
	tmp->next = (*sw_a)->next;
	(*sw_a)->next = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_list	**sw_b)
{
	t_list	*tmp;

	tmp = *sw_b;
	if (!tmp || !(tmp->next))
		return ;
	*sw_b = (*sw_b)->next;
	tmp->next = (*sw_b)->next;
	(*sw_b)->next = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_list **sw_a, t_list **sw_b)
{
	sa(sw_a);
	sb(sw_b);
}

void	pb(t_list **st_a, t_list **st_b)
{
	t_list	*tmp;

	tmp = *st_a;
	if (!tmp)
		return ;
	*st_a = (*st_a)->next;
	tmp->next = NULL;
	ft_lstadd_front(st_b, tmp);
	write(1, "pb\n", 3);
}

void	pa(t_list **st_b, t_list **st_a)
{
	t_list	*tmp;

	tmp = *st_b;
	if (!tmp)
		return ;
	*st_b = (*st_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(st_a, tmp);
	write(1, "pa\n", 3);
}
