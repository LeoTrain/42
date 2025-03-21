#include "tests.h"
#include "libft.h"

void    add_to_strlen_test(t_test_int *tests, int pos, char *str)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%s' to '%lu'", pos + 1, str, strlen(str));
    int     res1 = strlen(str);
    int     res2 = ft_strlen(str);
    init_int_test(tests, pos, desc, res1, res2, res1 == res2);
    free(desc);
}

void    test_strlen()
{
    int amount_of_tests = 5;
    t_test_int tests[amount_of_tests];
    add_to_strlen_test(tests, 0, "abc");
    add_to_strlen_test(tests, 1, "abcd");
    add_to_strlen_test(tests, 2, "abc de");
    add_to_strlen_test(tests, 3, "abc de f");
    add_to_strlen_test(tests, 4, "abc de fg");
    display_int_test(tests, amount_of_tests, "STRLEN");
}