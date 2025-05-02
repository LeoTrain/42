#include "../libftprintf.h"

static unsigned int	unsigned_putnbr(unsigned long long nb)
{
	char	c;
	int		length;

	length = 0;
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, 1);
		length++;
	}
	c = (nb % 10) + 48;
	return (write(1, &c, 1) + length);
}

unsigned int	arg_to_uint(unsigned int n)
{
	return (unsigned_putnbr(n));
}

