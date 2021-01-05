# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpichon <rpichon@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 11:25:01 by jdel-ros          #+#    #+#              #
#    Updated: 2021/01/05 13:28:58 by rpichon          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
SRC =	srcs/ft_strlen.s srcs/ft_strcmp.s srcs/ft_strcpy.s srcs/ft_write.s \
		srcs/ft_strdup.s srcs/ft_read.s
OBJ = $(SRC:.s=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.s
	nasm $< -f macho64 -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f test

re: fclean all

.PHONY: all re clean fclean
