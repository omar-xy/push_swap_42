/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:19:01 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/23 20:56:07 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len)
		len = (s_len - start);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	over;

	over = count * size;
	if (over != 0 && (over / count) != size)
		return (NULL);
	ptr = malloc(over);
	if (ptr != NULL)
		ft_bzero(ptr, over);
	return (ptr);
}
