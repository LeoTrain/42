#include "libft.h"
#include "tests.h"

void    add_to_strstr_test(t_test_str *tests, int pos, char *s1, char *s2)
{
    char *desc = (char *)malloc(sizeof(char) * 200);
    if (!desc)
        *desc = '\0';
    sprintf(desc, "Test %d: Searching '%s' in '%s'", pos + 1, s2, s1);
    char *res1 = strstr(s1, s2);
    char *res2 = ft_strstr(s1, s2);
    if (!res1 || !res2)
        init_str_test(tests, pos, desc, "NULL", "NULL", 1);
    else
        init_str_test(tests, pos, desc, res1, res2, strcmp(res1, res2) == 0);
    free(desc);
}

void test_strstr()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strstr_test(tests, 0, "abc", "a");
    add_to_strstr_test(tests, 1, "abcba", "b");
    add_to_strstr_test(tests, 2, "abc", "c");
    add_to_strstr_test(tests, 3, "abcd bef", "l");
    add_to_strstr_test(tests, 4, "abc def ghi", "e");
    display_str_test(tests, amount, "STRSTR");
}