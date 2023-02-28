/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_it_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:54:42 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:02:37 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_it_back(t_list	**s_a, t_list	**s_b)
{
	int	get_big_index;

	while (ft_lstsize(*s_b) > 0)
	{
		get_big_index = ft_find_index(s_b, (ft_lstsize(*s_b) - 1));
		if (get_big_index == 0)
			pa(s_b, s_a);
		else if (get_big_index <= ft_lstsize(*s_b) / 2)
			rb(s_b);
		else if (get_big_index > ft_lstsize(*s_b) / 2)
			rrb(s_b);
	}
}
