/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:57:56 by mde-gius          #+#    #+#             */
/*   Updated: 2021/02/15 12:01:30 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_flags
{
	int				already_print;
	int				type;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				star;
}					t_flags;

int					ft_isdigit(int c);
int					ft_printf(const char *str, ...);
int					ft_is_in_type_list(int c);
int					ft_is_in_flags_list(int c);
int					ft_treatment(int c, t_flags flags, va_list args);
int					ft_treat_width(int width, int minus, int has_zero);
int					ft_putstrprec(char *str, int prec);
int					ft_treat_char(char c, t_flags flags);
int					ft_treat_string(char *str, t_flags flags);
int					ft_treat_int(int i, t_flags flags);
int					ft_treat_percent(t_flags flags);
int					ft_treat_hexa(unsigned int ui, int lower, t_flags flags);
int					ft_treat_uint(unsigned int unsi, t_flags flags);
int					ft_flag_dot(const char *save, int start,
					t_flags		*flags, va_list args);
int					ft_putchar(int c);
int					ft_treat_pointer(unsigned long long pointer, t_flags flags);
int					ft_len(unsigned int n);
int					ft_tolower(int c);
int					ft_treat_width2(int width);
int					ft_treat_s_case(int i, int width);

size_t				ft_strlen(const char *s);

char				*ft_strdup(const char *s1);
char				*ft_ull_base(unsigned long long ull, int base);
char				*ft_u_itoa(unsigned int n);
char				*ft_str_tolower(char *str);
char				*ft_itoa(int n);

void				ft_putchar_fd(char c, int fd);

t_flags				ft_flag_minus(t_flags flags);
t_flags				ft_flag_width(va_list args, t_flags flags);
t_flags				ft_flag_digit(char c, t_flags flags);
#endif
