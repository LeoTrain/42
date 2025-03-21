#include "libft.h"
#include "tests.h"

void    add_to_memcpy_test(t_test_str *tests, int pos, void *s1, int n)
{
    char *desc = (char *)malloc(sizeof(char) * 150);
    sprintf(desc, "Test %d: ft_memcpy('%s', %d)", pos, (char *)s1, n);
    char *tmp1 = (char *)malloc(sizeof(char) * 150);
    char *tmp2 = (char *)malloc(sizeof(char) * 150);
    memcpy(tmp1, s1, n);
    ft_memcpy(tmp2, s1, n);
    init_str_test(tests, pos, desc, tmp2, tmp1, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_memcpy()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_memcpy_test(tests, 0, "Hello World!", 5);
    add_to_memcpy_test(tests, 1, "Hello World!", 0);
    add_to_memcpy_test(tests, 2, "Hello World!", 12);
    add_to_memcpy_test(tests, 3, "Hello World!", 13);
    add_to_memcpy_test(tests, 4, "Hello World!", 100);
    display_str_test(tests, amount, "MEMCPY");
}