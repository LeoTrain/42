#include "code/libftprintf.h"

int main(void)
{
	printf("\n\n\n\n");
	int i = 1;
	/*ft_printf("%s%c%s%d%u!\n", "Hello", ' ', "World", 57, 2147483647);*/
	/*printf("%s%%%c%s%d%u!\n", "Hello", ' ', "World", 57, 2147483647);*/
	ft_printf("FT_Adress\t: %p\n", &i);
	printf("Adress\t\t: %p\n", &i);
	return (0);
}
