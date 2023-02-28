/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:43:29 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/25 17:47:31 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list	**s_a)
{
	t_list	*tmp;
	int		a;
	int		b;
	int		c;

	tmp = *s_a;
	a = tmp->content;
	b = tmp->next->content;
	c = tmp->next->next->content;
	if ((a > b) && (b < c) && (a < c))
		sa(s_a);
	else if ((a > b) && (a > c) && (b > c))
	{
		sa(s_a);
		rra(s_a);
	}
	else if ((a > b) && (a > c) && (b < c))
		ra(s_a);
	else if ((a < b) && (a < c))
	{
		sa(s_a);
		ra(s_a);
	}
	else
		rra(s_a);
}
