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
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	t_stock_str *stocks = ft_strs_to_tab(argc, argv);
	strcpy(stocks[0].copy, "Hello");
	// while((*stocks).str != 0)
	// {
	// 	printf("%d - %s - %s\n", (*stocks).size, (*stocks).str, (*stocks).copy);
	// 	stocks++;
	// }
	ft_show_tab(stocks);
}
