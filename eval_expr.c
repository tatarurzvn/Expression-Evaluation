#include "my.h"
#include <stdlib.h>

int		summands(char **str)
{
	int		no1;
	int		no2;
	char	op;

	no1 = factors(str);
	while (1)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '-' && op != '+')
			return (no1);
		(*str)++;
		no2 = factors(str);
		if (op == '-')
			no1 = no1 - no2;
		else
			no1 = no1 + no2;
	}
}

void	res_cpy_modifier(int res_cpy, char **str)
{
	while (res_cpy)
	{
		(*str)++;
		res_cpy /= 10;
	}
}

int		atom(char **str)
{
	int res;
	int res_cpy;
	int negative;

	while (**str == ' ')
		(*str)++;
	negative = 0;
	if (**str == '-')
	{
		negative = 1;
		(*str)++;
	}
	if (**str == '+')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		res = summands(str);
		(*str)++;
		return (negative ? -res : res);
	}
	res = ft_atoi(*str);
	res_cpy = res;
	res_cpy_modifier(res_cpy, str);
	return (res);
}

int		factors(char **str)
{
	int		no1;
	int		no2;
	char	op;

	no1 = atom(str);
	while (1)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (no1);
		(*str)++;
		no2 = atom(str);
		if (op == '/')
			no1 = no1 / no2;
		if (op == '*')
			no1 = no1 * no2;
		if (op == '%')
			no1 = no1 % no2;
	}
}

int		eval_expr(char *str)
{
	return (summands(&str));
}
