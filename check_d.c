/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:16:53 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:18:13 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check(t_list *node, int nbr)
{
	while (node)
	{
		if (nbr == node->content)
			return (DUPLICATED);
		node = node->next;
	}
	return (0);
}

void	ft_check_d(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		if (tmp->next == NULL)
			return ;
		if (ft_check(tmp->next, tmp->content) == DUPLICATED)
			ft_error(1, &head, NULL);
		tmp = tmp->next;
	}
}
