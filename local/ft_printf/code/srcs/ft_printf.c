#include "../ft_libft/libft.h"
#include "../ft_printf.h"
#include <stdint.h>
#include <stdio.h>

static int	printchar(int c)
{
	char	ch;
	ch = (char)c;
	write(1, &ch, 1);
	return (1);
}

static int	run_format_handler(va_list *args, const char c)
{
	if (c == '%')
		return (write(1, "%", 1));
	else if (c == 'c')
		return (printchar(va_arg(*args, int)));
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

	len = 0;
	va_start(args, s);
	while(*s)
	{
		if (*s == '%')
			len += run_format_handler(&args, *(++s));
		else
			len += printchar(*s);
		s++;
	}
	va_end(args);
	return (len);
}
