/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tow_hundered.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:36:28 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:33:06 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	push_it(t_list	**s_a, t_list **s_b, int c_chunk, int last_e)
{
	int	middle;

	middle = c_chunk / 2;
	while ((*s_a) && c_chunk > 0)
	{
		if ((*s_a)->position <= last_e)
		{
			if ((*s_a)->position >= last_e - middle)
			{
				pb(s_a, s_b);
				rb(s_b);
			}
			else
				pb(s_a, s_b);
			c_chunk--;
		}
		else
			ra(s_a);
	}
}

void	sort_tow_hundered(t_list **s_a, t_list **s_b, int n_chunks)
{
	int	current_chunk;
	int	last_element;

	current_chunk = ft_lstsize(*s_a) / n_chunks;
	last_element = current_chunk;
	while (ft_lstsize(*s_a) != 0)
	{
		push_it(s_a, s_b, current_chunk, last_element);
		last_element += current_chunk;
	}
	push_it_back(s_a, s_b);
}
