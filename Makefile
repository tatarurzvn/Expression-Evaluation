SOURCES=eval_expr.c ft_atoi.c ft_putnbr.c main.c
NAME=eval_expr

all: $(NAME)

$(NAME): $(SOURCES)
	gcc -Wall -Wextra -Werror $(SOURCES) -o $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean

re: fclean all
