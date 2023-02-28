/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:26:17 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/24 12:55:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_pos(t_list	**s_ap)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *s_ap;
	while (tmp)
	{
		tmp->position = 0;
		tmp2 = (*s_ap);
		while (tmp2)
		{
			if (tmp->content > tmp2->content)
				tmp->position += 1;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
