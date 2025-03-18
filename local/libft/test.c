#include "libft.h"
#include <stdio.h>

int main()
{
    printf("\nTOLOWER START\n");
    printf("%c\n", ft_tolower('A')); 
    printf("%c\n", ft_tolower('a')); 
    printf("%c\n", ft_tolower('Z')); 
    printf("%c\n", ft_tolower('9')); 
    printf("TOLOWER END\n");


    printf("\nTOUPPER START\n");
    printf("%c\n", ft_toupper('a')); 
    printf("%c\n", ft_toupper('A')); 
    printf("%c\n", ft_toupper('z')); 
    printf("%c\n", ft_toupper('9')); 
    printf("TOUPPER END\n");
    return 0;
}