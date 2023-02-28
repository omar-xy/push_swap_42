/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:50:31 by otaraki           #+#    #+#             */
/*   Updated: 2023/02/23 20:56:14 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

static int	checksign(char *str, int *sign)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			(*sign) *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi(char *str, int *nbr)
{
	int				i;
	int				sign;
	long int		res;

	res = 0;
	sign = 1;
	if (*str == '\0')
		return (0);
	i = checksign(str, &sign);
	if (i > 1)
		return (0);
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			res = res * 10 + str[i] - '0';
		else
			return (0);
		i++;
	}
	*nbr = sign * res;
	return (1);
}
