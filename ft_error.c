/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:09:02 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:32:17 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_data(char **a)
{
	int	i;

	i = -1;
	while (a[++i])
		free(a[i]);
	free(a);
}

void	ft_error(int E, t_list **a, char **b)
{
	if (E == 1)
	{
		write(2, "Error\n", 7);
		if (a)
			ft_lstclear(a);
		if (b)
			clear_data(b);
		exit(1);
	}
	if (E == 2)
	{
		if (a)
			ft_lstclear(a);
		exit(0);
	}
}

t_list	*ft_bef_last(t_list *s)
{
	t_list	*prv;

	prv = s;
	if (!prv)
		return (prv);
	while (s->next)
	{
		prv = s;
		s = s->next;
	}
	return (prv);
}
