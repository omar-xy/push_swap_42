/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:38:29 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/25 18:18:36 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_list	**s_a, t_list	**s_b)
{
	int		index;
	int		size;
	int		ns;

	index = ft_find_index(s_a, 0);
	size = 4;
	while (index <= (size / 2) && index != 0)
	{
		ra(s_a);
		index = ft_find_index(s_a, 0);
	}
	while (index >= (size / 2) && index != 0)
	{
		rra(s_a);
		index = ft_find_index(s_a, 0);
	}
	pb(s_a, s_b);
	ns = ft_check_s(*s_a);
	if (ns == NOT_SORETED)
		sort_three(s_a);
	pa(s_b, s_a);
}
