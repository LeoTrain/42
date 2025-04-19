#include "tests.h"
#include "libft.h"

void    add_to_strncpy_test(t_test_str *tests, int pos, char *str, unsigned int n)
{
    char    *tmp1 = malloc(n);
    char    *tmp2 = malloc(n);
    if (!tmp1 || !tmp2)
        return;
    strncpy(tmp1, str, n);
    ft_strncpy(tmp2, str, n);
    if (tmp1 == NULL && tmp2 == NULL)
        init_str_test(tests, pos, "NULL", "NULL", "NULL", 1);
    else if (tmp1 != NULL && tmp2 != NULL)
        init_str_test(tests, pos, str, tmp1, tmp2, memcmp(tmp1, tmp2, n) == 0);
    else
        init_str_test(tests, pos, str, tmp1, tmp2, 0);
    free(tmp1);
    free(tmp2);
}

void    test_strncpy()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strncpy_test(tests, 0, "abc", 3);
    add_to_strncpy_test(tests, 1, "abcd", 4);
    add_to_strncpy_test(tests, 2, "abc de", 6);
    add_to_strncpy_test(tests, 3, "abc de f", 8);
    add_to_strncpy_test(tests, 4, "abc de\0 fg", 9);
    display_str_test(tests, amount, "STRNCPY");
}
