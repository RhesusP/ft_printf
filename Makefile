# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbernot <cbernot@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 22:13:51 by cbernot           #+#    #+#              #
#    Updated: 2022/12/07 08:38:10 by cbernot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ./srcs/ft_printf.c ./srcs/ft_print_char.c ./srcs/ft_print_str.c ./srcs/ft_printf_utils.c \
		./srcs/ft_print_int.c ./srcs/ft_print_int_hex.c ./srcs/ft_print_ptr.c ./srcs/ft_print_uint.c
OBJS = ${SRCS:.c=.o}
INCLUDES = ./includes/ft_printf.h
FLAGS = -Wall -Wextra -Werror

%.o : %.c ${INCLUDES}
	gcc ${FLAGS} -I ${INCLUDES} -c $< -o $@

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all : $(NAME)

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re