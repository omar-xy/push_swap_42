/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:08:09 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:30:36 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_stack_a(t_list **sa, char **arg)
{
	t_list	*node;
	char	**c;
	int		nbr;
	int		i;
	int		j;

	i = 1;
	while (arg[i])
	{
		j = 0;
		c = ft_split(arg[i], ' ');
		if (!c || c[0] == NULL)
			ft_error(1, sa, NULL);
		while (c[j])
		{
			if (ft_atoi(c[j], &nbr) == 0)
				ft_error(1, sa, c);
			node = ft_lstnew(nbr);
			ft_lstadd_back(sa, node);
			j++;
		}
		clear_data(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_list	*s_a;
	t_list	*s_b;

	s_a = NULL;
	s_b = NULL;
	if (ac < 1)
		return (1);
	get_stack_a(&s_a, av);
	ft_check_d(s_a);
	if (ft_check_s(s_a) == NOT_SORETED)
	{
		ft_get_pos(&s_a);
		ft_get_sorted((ac - 1), &s_a, &s_b);
	}
	else
		ft_error(2, &s_a, NULL);
	ft_lstclear(&s_a);
	ft_lstclear(&s_b);
}

	// tmp = s_a;
	// while (tmp != NULL)
	// {
	// 	printf("\nstack a  = %d\t%d\n", tmp->content, tmp->position);
	// 	tmp = tmp->next;
	// }
	// printf("--------------------------------------------------------\n");
	// tmp1 = s_b;
	// while (tmp1 != NULL)
	// {
	// 	printf("\nstack b  = %d\t%d\n", tmp1->content, tmp1->position);
	// 	tmp1 = tmp1->next;
	// }