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

int	arg_to_ptr(unsigned long long ptr)
{

	ft_putstr_fd("0x", 1);
	if (ptr == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	int_to_hexadecimal(ptr, 0);
	return (ulong_length(ptr));
}
