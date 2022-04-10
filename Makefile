# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 22:56:12 by abestaev          #+#    #+#              #
#    Updated: 2022/04/10 06:14:27 by abestaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRC = src/push_swap.c src/error.c src/parse.c src/free.c \
	src/is_sorted.c src/operation/swap.c src/operation/reverse_rotate.c \
	src/operation/rotate.c src/operation/push.c \
	src/algo.c src/init.c src/big_algo.c src/algo_reverse.c \
	src/rotate_chunk.c src/which_algo.c src/split_a.c src/split_b.c \
	src/split_utils.c src/index.c


HEADER = -I include -I libft

LIBFT = -L libft -lft

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o:%.c
		$(CC) $(CFLAGS) -o $@ -c $< $(HEADER)

$(NAME): $(OBJ)
		make -C libft
		$(CC) -o $(NAME) $(OBJ) $(HEADER) $(LIBFT)

clean: 
		make clean -C libft
		rm -rf $(OBJ)

fclean: clean
		make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
