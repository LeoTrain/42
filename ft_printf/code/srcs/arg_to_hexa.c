#include "../ft_printf.h"

static int	length(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

void	uint_to_hex(unsigned int n, int uppercase)
{
	if (n >= 16)
	{
		uint_to_hex(n / 16, uppercase);
		uint_to_hex(n % 16, uppercase);
	}
	else
	{
		if (n > 9)
		{
			if (uppercase == 0)
				ft_putchar_fd((n - 10 + 'a'), 1);
			else
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
		else
			ft_putchar_fd((n + '0'), 1);
	}
}

int	arg_to_hexa(unsigned int n, int uppercase)
{
	if (n == 0)
		return (write(1, "0", 1));
	uint_to_hex(n, uppercase);
	return (length(n));
}
