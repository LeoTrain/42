#include "tests.h"
#include "libft.h"

void    add_to_strncmp_test(t_test_int *tests, int pos, char *s1, char *s2, int n)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%s' compares to '%s' with %d", pos + 1, s1, s2, n);
    init_int_test(tests, pos, desc, ft_strncmp(s1, s2, n), strncmp(s1, s2, n), ft_strncmp(s1, s2, n) == strncmp(s1, s2, n));
}

void    test_strncmp()
{
    int amount = 5;
    t_test_int tests[amount];
    add_to_strncmp_test(tests, 0, "abc", "def", 3);
    add_to_strncmp_test(tests, 1, "abc", "defg", 4);
    add_to_strncmp_test(tests, 2, "", "fgh", 3);
    add_to_strncmp_test(tests, 3, "abc de f", "ghi", 3);
    add_to_strncmp_test(tests, 4, "abc de fg", "hij", 3);
    display_int_test(tests, amount, "STRNCMP");
}