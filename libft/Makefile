# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 17:42:00 by abestaev          #+#    #+#              #
#    Updated: 2021/10/09 00:59:23 by abestaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o) 

all : $(NAME)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $@ $^
       	
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

so :
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
