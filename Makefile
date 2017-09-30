# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtataru <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/30 18:14:06 by rtataru           #+#    #+#              #
#    Updated: 2017/09/30 18:33:30 by rtataru          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES=eval_expr.c ft_atoi.c ft_putnbr.c main.c
NAME=eval_expr

all: $(NAME)

$(NAME): $(SOURCES)
	gcc -Wall -Wextra -Werror $(SOURCES) -o $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean

re: fclean all
