/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:05:02 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:31:11 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*next;
	t_list	*c;

	c = *lst;
	while (c)
	{
		next = c->next;
		free(c);
		c = next;
	}
	*lst = NULL;
}
