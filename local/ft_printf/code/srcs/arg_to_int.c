#include "../libftprintf.h"

int	arg_to_int(int d)
{
	ft_putnbr_fd(d, 1);
	return (calculate_int_length(d));
}
