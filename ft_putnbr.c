#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcacat(long long nb)
{
	long long b;

	b = nb;
	if (b != 0)
	{
		if (b < 0)
		{
			b = -b;
			ft_putchar('-');
		}
		ft_putcacat(b / 10);
		ft_putchar('0' + b % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	ft_putcacat(nb);
}
