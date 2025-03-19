#include "tests.h"
#include "libft.h"

void    add_to_strdup_test(t_test_str *tests, int pos, char *str)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%s' to '%s'", pos + 1, str, strdup(str));
    char    *res1 = strdup(str);
    char    *res2 = ft_strdup(str);
    init_str_test(tests, pos, desc, res1, res2, strcmp(res1, res2) == 0);
    free(res1);
    free(res2);
    free(desc);
}

void    test_strdup()
{
    int amount_of_tests = 5;
    t_test_str tests[amount_of_tests];
    add_to_strdup_test(tests, 0, "abc");
    add_to_strdup_test(tests, 1, "abcd");
    add_to_strdup_test(tests, 2, "abc de");
    add_to_strdup_test(tests, 3, "abc de f");
    add_to_strdup_test(tests, 4, "abc de fg");
    display_str_test(tests, amount_of_tests, "STRDUP");
    for (int i = 0; i < amount_of_tests; i++)
        free(tests[i].description);
}