#include "ft_libft/libft.h"
#include "libftprintf.h"
#include <stdint.h>

int	unsigned_putnbr(unsigned long long nb)
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

int	ulong_length(unsigned long long n)
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

int	arg_to_str(const char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	return (write(1, str, ft_strlen(str)));
}

void	int_to_hexadecimal(unsigned long long n)
{
	if (n >= 16)
	{
		int_to_hexadecimal(n / 16);
		int_to_hexadecimal(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(n - 10 + 'a', 1);
		else
			ft_putchar_fd(n + '0', 1);
	}
}

int	arg_to_ptr(unsigned long long ptr)
{

	ft_putstr_fd("0x", 1);
	if (ptr == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	int_to_hexadecimal(ptr);
	return (ulong_length(ptr));
}

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

int	arg_to_dec(int d)
{
	ft_putnbr_fd(d, 1);
	return (calculate_int_length(d));
}


int	arg_to_udec(unsigned int d)
{
	return (unsigned_putnbr(d));
}

static int	run_format_handler(char c, va_list *args)
{
	if (c == '%')
		return (write(1, &c, 1));
	else if (c == 'c')
	{
		char c = (char)va_arg(*args, int);
		return (write(1, &c, 1));
	}
	else if (c == 's')
		return (arg_to_str(va_arg(*args, char *)));
	else if (c == 'p')
		return (arg_to_ptr(va_arg(*args, unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (arg_to_dec(va_arg(*args, int)));
	else if (c == 'u')
		return (arg_to_udec(va_arg(*args, unsigned int)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;

	if (!s)
		return (0);
	len = 0;
	va_start(args, s);
	while(*s)
	{
		if (*s == '%')
		{
			s++;
			len += run_format_handler(*s, &args);
		}
		else
			len += write(1, s, 1);
		s++;
	}
	va_end(args);
	return (len);
}
