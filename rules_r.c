/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:18:15 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 17:57:33 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **st_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *st_a;
	if (!tmp || !(tmp->next))
		return ;
	tmp = *st_a;
	*st_a = (*st_a)->next;
	tmp2 = ft_lstlast(*st_a);
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **st_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *st_b;
	if (!tmp || !(tmp->next))
		return ;
	tmp = *st_b;
	*st_b = (*st_b)->next;
	tmp2 = ft_lstlast(*st_b);
	tmp2->next = tmp;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rra(t_list **st_a)
{
	t_list	*stmp;

	stmp = *st_a;
	if (!(stmp) || !(stmp->next))
		return ;
	stmp = ft_bef_last(stmp);
	stmp->next->next = (*st_a);
	*st_a = stmp->next;
	stmp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **st_b)
{
	t_list	*stmp;

	stmp = *st_b;
	if (!(stmp) || !(stmp->next))
		return ;
	stmp = ft_bef_last(stmp);
	stmp->next->next = (*st_b);
	*st_b = stmp->next;
	stmp->next = NULL;
	write(1, "rrb\n", 4);
}
