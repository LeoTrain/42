#include "libft.h"
#include <stdio.h>

int main()
{
	char dest1[50] = "Hello ";
	printf("%lu, %s\n", ft_strlcat(dest1, "World!", 50), dest1);

	char dest2[50] = "Hello ";
	printf("%lu, %s\n", ft_strlcat(dest2, "World!", 11), dest2);

	char dest3[10] = "Hello ";
	printf("%lu, %s\n", ft_strlcat(dest3, "World!", 50), dest3);

	char dest4[10] = "Hello ";
	printf("%lu, %s\n", ft_strlcat(dest4, "World!", 2), dest4);
	return (0);
}