#include "../ft_printf.h"

int	arg_to_int(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_strlen(num);
	ft_putstr_fd(num, 1);
	free(num);
	return (len);
}
