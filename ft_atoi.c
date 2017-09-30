int		ft_remove_the_poo(char *str)
{
	if (' ' == *str || '\t' == *str || '\n' == *str || '\v' == *str)
	{
		return (1);
	}
	if ('\f' == *str || '\r' == *str)
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int negativ;
	int my_num;

	my_num = 0;
	negativ = 1;
	while (ft_remove_the_poo(str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			negativ = -1;
		}
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		my_num = my_num * 10 + *str - '0';
		str++;
	}
	return (my_num * negativ);
}
