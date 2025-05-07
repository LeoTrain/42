#include "../ft_libft/libft.h"
#include "../libftprintf.h"
#include <stdint.h>
#include <stdio.h>

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
		return (arg_to_int(va_arg(*args, int)));
	else if (c == 'u')
		return (arg_to_uint(va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (arg_to_hexa(va_arg(*args, int), c == 'X'));
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
