/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:38:46 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/23 20:40:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_s(t_list	*sa)
{
	t_list	*tmp;

	while (sa->next != NULL)
	{
		tmp = sa->next;
		while (tmp != NULL)
		{
			if (sa->content > tmp->content)
				return (NOT_SORETED);
			tmp = tmp->next;
		}
		sa = sa->next;
	}
	return (1);
}
