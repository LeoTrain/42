#include "../ft_printf.h"

int		len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		l;

	l = len(n);
	str = ft_calloc(l + 1, sizeof(char));
	if (!str)
		return (0);
	while (n != 0)
	{
		str[l - 1] = n % 10 + 48;
		n /= 10;
		l--;
	}
	return (str);
}

unsigned int	arg_to_uint(unsigned int n)
{
	char	*str;
	int		l;

	if (n == 0)
		return (write(1, "0", 1));
	str = ft_uitoa(n);
	ft_putstr_fd(str, 1);
	l = ft_strlen(str);
	free(str);
	return (l);
}

