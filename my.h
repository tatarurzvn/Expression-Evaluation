#ifndef MY_H
# define MY_H

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_atoi(char *str);

int		eval_expr(char *str);

int		summands(char **str);

int		atoms(char **str);

int		factors(char **str);

#endif
