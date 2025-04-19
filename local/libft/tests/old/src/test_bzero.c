#include "libft.h"
#include "tests.h"

void    add_to_bzero_test(t_test_str *test, int pos, void *s, unsigned int len)
{
    char *desc = (char *)malloc(150);
    sprintf(desc, "Test %d: bzero(%p, %u)", pos, s, len);
    void *tmp1 = strdup(s);
    void *tmp2 = strdup(s);
    if (!tmp1 || !tmp2)
        init_str_test(test, pos, desc, "NULL", "NULL", 1);
    else
    {
        bzero(tmp1, len);
        ft_bzero(tmp2, len);
        init_str_test(test, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    }
}

void    test_bzero(void)
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_bzero_test(tests, 0, "Hello, World!", 5);
    add_to_bzero_test(tests, 1, "Hello, World!", 0);
    add_to_bzero_test(tests, 2, "Hello, World!", 13);
    add_to_bzero_test(tests, 3, "Hello, World!", 14);
    int arr[3] = {1, 5, 4};
    add_to_bzero_test(tests, 4, arr, 15);
    display_str_test(tests, amount, "BZERO");
}