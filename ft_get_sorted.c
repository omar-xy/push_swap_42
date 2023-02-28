/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:33:22 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 18:40:56 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_sorted(int agc, t_list	**stack_a, t_list	**stack_b)
{
	int	ac;

	ac = agc;
	*stack_b = NULL;
	if (ac == 2)
		sa(stack_a);
	else if (ac == 3)
		sort_three(stack_a);
	else if (ac == 4)
		sort_four(stack_a, stack_b);
	else if (ac == 5)
		sort_five(stack_a, stack_b);
	else if (ac > 5 && ac < 200)
		sort_tow_hundered(stack_a, stack_b, 5);
	else if (ac > 200)
		sort_tow_hundered(stack_a, stack_b, 10);
}
