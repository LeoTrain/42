#include "../ft_printf.h"
#include <stdint.h>

static int	length(uintptr_t n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void uintptr_to_hexa(uintptr_t n)
{
	if (n >= 16)
	{
		uintptr_to_hexa(n / 16);
		uintptr_to_hexa(n % 16);
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
	if (n == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	uintptr_to_hexa(n);
	return (length(n) + 2);
}
