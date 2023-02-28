/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:19:38 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/25 19:09:13 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list	**s_a, t_list	**s_b)
{
	int	x;

	x = 0;
	while (x < 2)
	{
		while (ft_find_index(s_a, x) != 0)
		{
			if (ft_find_index(s_a, x) <= 2)
				ra(s_a);
			else if (ft_find_index(s_a, x) > 2)
				rra(s_a);
		}
		pb(s_a, s_b);
		x++;
	}
	if (ft_check_s(*s_a) == NOT_SORETED)
		sort_three(s_a);
	pa(s_b, s_a);
	pa(s_b, s_a);
}
