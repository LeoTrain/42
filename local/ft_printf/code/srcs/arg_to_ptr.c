#include "../libftprintf.h"

static int	ulong_length(unsigned long long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void ull_to_hexadecimal(unsigned long long n)
{
	if (n >= 16)
	{
		ull_to_hexadecimal(n / 16);
		ull_to_hexadecimal(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(n - 10 + 'a', 1);
		else
			ft_putchar_fd(n + '0', 1);
	}
}

int	arg_to_ptr(unsigned long long n)
{

	ft_putstr_fd("0x", 1);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	ull_to_hexadecimal(n);
	return (ulong_length(n) + 1);
}
