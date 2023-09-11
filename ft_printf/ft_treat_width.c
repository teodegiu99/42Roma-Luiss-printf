/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:03:50 by mde-gius          #+#    #+#             */
/*   Updated: 2021/02/15 12:02:41 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_width(int width, int minus, int has_zero)
{
	int char_count;

	char_count = 0;
	while (width - minus > 0)
	{
		if (has_zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width -= 1;
		char_count++;
	}
	return (char_count);
}

int		ft_treat_width2(int width)
{
	int char_count;
	int char_left;

	char_left = width - 2;
	char_count = 0;
	while (char_left > 0)
	{
		ft_putchar(' ');
		char_left--;
		char_count++;
	}
	return (char_count);
}

int		ft_treat_s_case(int i, int width)
{
	char	*d_i;
	int		char_count;
	int		w;

	d_i = ft_itoa(i);
	char_count = ft_putstrprec(d_i, ft_strlen(d_i));
	if ((w = width - char_count) > 0)
		while (w)
		{
			ft_putstrprec(" ", 1);
			char_count++;
			w--;
		}
	return (char_count);
}
