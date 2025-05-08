#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "ft_libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

int				ft_printf(const char *c, ...);
int				arg_to_str(const char *);
int				arg_to_ptr(unsigned long long ptr);
int				arg_to_int(int d, int plus);
unsigned int	arg_to_uint(unsigned int n);
void			int_to_hexadecimal(int n, int uppercase);
int				calculate_int_length(int n);
int				arg_to_hexa(unsigned int n, int uppercase, char format);

#endif 
