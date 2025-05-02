#include "../libftprintf.h"

int	calculate_int_length(int i)
{
	int	length;

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
	return (length);
}

void	int_to_hexadecimal(unsigned long long n, int uppercase)
{
	if (n >= 16)
	{
		int_to_hexadecimal(n / 16, uppercase);
		int_to_hexadecimal(n % 16, uppercase);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(n - 10 + 'a', 1);
		else
			ft_putchar_fd(n + '0', 1);
	}
}

