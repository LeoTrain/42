#include "../../libft/libft.h"
#include "../tests.h"

void    add_to_memccpy_test(t_test_str *tests, int pos, void *s1, int c, int n)
{
    char *desc = (char *)malloc(sizeof(char) * 150);
    sprintf(desc, "Test %d: ft_memcpy('%s', %d)", pos, (char *)s1, n);
    char *tmp1 = (char *)malloc(sizeof(char) * 150);
    char *tmp2 = (char *)malloc(sizeof(char) * 150);
    memccpy(tmp1, s1, c, n);
    ft_memccpy(tmp2, s1, c, n);
    init_str_test(tests, pos, desc, tmp2, tmp1, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_memccpy()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_memccpy_test(tests, 0, "Hello World!", 'o', 5);
    add_to_memccpy_test(tests, 1, "Hello World!", 'W', 0);
    add_to_memccpy_test(tests, 2, "Hello World!", 'x', 12);
    add_to_memccpy_test(tests, 3, "Hello World!", '!', 13);
    add_to_memccpy_test(tests, 4, "Hello World!", '+', 100);
    display_str_test(tests, amount, "MEMCCPY");
}
