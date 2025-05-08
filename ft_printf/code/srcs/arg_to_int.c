#include "../ft_printf.h"

int	arg_to_int(int n, int plus)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_strlen(num);
	if (plus && n >= 0)
		len += write(1, "+", 1); 
	ft_putstr_fd(num, 1);
	free(num);
	return (len);
}
