#include "libft.h"
#include "tests.h"

void    add_to_strrchr_test(t_test_str *tests, int pos, char *s1, char c)
{
    char    *desc = (char *)malloc(200);
    sprintf(desc, "Test %d: Searching last '%c' in '%s'", pos + 1, c, s1);
    char    *tmp1 = (char *)malloc(strlen(s1) + 1);
    char    *tmp2 = (char *)malloc(strlen(s1) + 1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strrchr(tmp1, c);
    strrchr(tmp2, c);
    init_str_test(tests, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_strrchr()
{
    int amount = 4;
    t_test_str tests[amount];
    add_to_strrchr_test(tests, 0, "abc", 'a');
    add_to_strrchr_test(tests, 1, "abcba", 'b');
    add_to_strrchr_test(tests, 2, "abc", 'c');
    add_to_strrchr_test(tests, 3, "abcd bef", 'd');
    add_to_strrchr_test(tests, 4, "abc def ghi", 'l');
    display_str_test(tests, amount, "STRRCHR");
}