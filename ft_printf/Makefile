# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 15:14:19 by mde-gius          #+#    #+#              #
#    Updated: 2021/02/10 15:14:24 by mde-gius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_printf.c \
		ft_treatment.c \
		ft_treat_width.c \
		ft_u_itoa.c \
		ft_ull_base.c \
		ft_putchar.c \
		ft_str_tolower.c \
		ft_putstrprec.c \
		ft_treat_string.c \
		ft_treat_char.c \
		ft_treat_pointer.c \
		ft_treat_int.c \
		ft_treat_uint.c \
		ft_treat_percent.c \
		ft_treat_hexa.c \
		ft_treat_flags.c \
		ft_function_helper.c

OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
AR		=	ar -rcs

.c.o	:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
$(NAME)	:	${OBJS}
			${AR} $(NAME) $(OBJS)
all		:	$(NAME)
clean 	:
			rm -rf $(OBJS)
fclean : 	clean
			rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re