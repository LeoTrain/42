#include "../ft_printf.h"
#include <stdio.h>

int	calculate_int_length(int i)
{
	int	length;

	if (i == -2147483648)
		return (13);
	length = 0;
	if (i < 0)
	{
		length++;
		i = -i;
	}
	while (i > 0)
	{
		i /= 10;
		length++;
	}
	length += 2;
	return (length);
}

void	int_to_hexadecimal(int n, int uppercase)
{
	if (n >= 16)
	{
		int_to_hexadecimal(n / 16, uppercase);
		int_to_hexadecimal(n % 16, uppercase);
	}
	else
	{
		if (n > 9)
		{
			if (uppercase)
				ft_putchar_fd(n - 10 + 'A', 1);
			else
				ft_putchar_fd(n - 10 + 'a', 1);
		}
		else
			ft_putchar_fd(n + '0', 1);
	}
}
