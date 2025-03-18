#include "tests.h"
#include "libft.h"

void    add_to_strcmp_test(t_test_str *tests, int pos, char *s1, char *s2)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%s' compares to '%s'", pos + 1, s1, s2);
    char *tmp1 = malloc(strlen(s1) + strlen(s2) + 1);
    char *tmp2 = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strcmp(tmp1, s2);
    strcmp(tmp2, s2);
    init_str_test(tests, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
}

void    test_strcmp()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strcmp_test(tests, 0, "abc", "def");
    add_to_strcmp_test(tests, 1, "abc", "defg");
    add_to_strcmp_test(tests, 2, "", "fgh");
    add_to_strcmp_test(tests, 3, "abc de f", "ghi");
    add_to_strcmp_test(tests, 4, "abc de fg", "hij");
    display_str_test(tests, amount, "STRCMP");
}