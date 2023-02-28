/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:41:49 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 17:57:03 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_list **s_a, int pos)
{
	t_list	*s;
	int		index;

	s = *s_a;
	index = 0;
	while (s)
	{
		if (s->position == pos)
			break ;
		index++;
		s = s->next;
	}
	return (index);
}
