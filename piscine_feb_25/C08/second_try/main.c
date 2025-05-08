// #include "ex01/ft_boolean.h"
//
// void ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }
//
// t_bool ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }
//
// int main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }


// #include "ex02/ft_abs.h"
// #include <stdio.h>
// #include <limits.h>
//
// int main(void)
// {
// 	printf("%d\n", ABS(10 - INT_MIN));
// }


// #include "ex03/ft_point.h"
// #include <stdio.h>
//
// void set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }
// int main(void)
// {
// 	t_point point;
// 	set_point(&point);
// 	printf("%d-%d\n", point.x, point.y);
// 	return (0);
// }

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int	ft_abs(long int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int			ft_len(long int nbr)
{
	int	len;

	len = (nbr <= 0) ? 1 : 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*c;

	sign = (nbr < 0) ? -1 : 1;
	len = ft_len(nbr);
	c = (char *)malloc(sizeof(char) * len + 1);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(nbr % 10);
		nbr = ft_abs(nbr / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}

int main(void)
{
	int argc = 100000;
	char **argv = malloc(sizeof(char) * argc);
	for (int i = 0; i < argc; i++)
	{
		argv[i] = malloc(sizeof(char) * 12);
		argv[i] = ft_itoa(i);
	}
	t_stock_str *stocks = ft_strs_to_tab(argc, argv);
	// strcpy(stocks[0].copy, "HelloWorldImABigGuy");
	if (stocks != NULL)
		ft_show_tab(stocks);
}
