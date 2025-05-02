#include "../libftprintf.h"

int	arg_to_hexa(int	n, int uppercase)
{
	int_to_hexadecimal(n, uppercase);
	return (calculate_int_length(n));
}
