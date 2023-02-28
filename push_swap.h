/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:11:12 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/28 19:32:43 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define DUPLICATED -1
# define NOT_SORETED -2

typedef struct s_list
{
	int				content;
	int				position;
	struct s_list	*next;
}	t_list;

// libft_string_utils
int		ft_atoi(char *str, int *nbr);
t_list	*ft_bef_last(t_list *s);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
// parsing_utils
void	ft_error(int E, t_list **a, char **b);
void	ft_get_pos(t_list	**s_ap);
void	ft_check_d(t_list *head);
int		ft_check_s(t_list	*sa);
//rules
void	sa(t_list	**sw_a);
void	sb(t_list	**sw_b);
void	ss(t_list **sw_a, t_list **sw_b);
void	pb(t_list **st_a, t_list **st_b);
void	pa(t_list **st_b, t_list **st_a);
void	ra(t_list **st_a);
void	rb(t_list **st_b);
void	rra(t_list **st_a);
void	rrb(t_list **st_b);
void	rr(t_list	**st_a, t_list	**st_b);
void	rrr(t_list	**st_a, t_list	**st_b);
// sorting functions
void	ft_get_sorted(int agc, t_list	**stack_a, t_list	**stack_b);
int		ft_find_index(t_list **s_a, int pos);
void	sort_three(t_list	**s_a);
void	sort_four(t_list	**s_a, t_list	**s_b);
void	sort_five(t_list	**s_a, t_list	**s_b);
void	sort_tow_hundered(t_list **s_a, t_list **s_b, int n_chunks);
void	push_it_back(t_list	**s_a, t_list	**s_b);

// clear functions
void	ft_lstclear(t_list **lst);
void	clear_data(char **a);
#endif