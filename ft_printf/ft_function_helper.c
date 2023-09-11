/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function_helper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:31:06 by mde-gius          #+#    #+#             */
/*   Updated: 2021/02/12 17:21:04 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_strlen(const char *s)
{
	size_t				i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char		*ft_strdup(const char *s1)
{
	size_t				i;
	char				*dst;

	i = 0;
	if (!(dst = malloc(ft_strlen(s1) + 1)))
	{
		return (NULL);
	}
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int			ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int			ft_len(unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char		*ft_itoa(int n)
{
	unsigned int		len;
	unsigned int		nb;
	unsigned int		i;
	char				*out;

	nb = (n < 0 ? -n : n);
	len = ft_len(nb);
	i = 0;
	if (n < 0)
		len++;
	if (!(out = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n < 0)
		out[i] = '-';
	i = len - 1;
	while (nb >= 10)
	{
		out[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	out[i] = nb % 10 + '0';
	out[len] = '\0';
	return (out);
}
