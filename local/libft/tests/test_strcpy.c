#include "tests.h"
#include "libft.h"

void    add_to_strcpy_test(t_test_str *tests, int pos, char *str)
{
    char *desc = (char *)malloc(sizeof(char) * 100);
    char *tmp1 = (char *)malloc(sizeof(char) * 100);
    char *tmp2 = (char *)malloc(sizeof(char) * 100);
    sprintf(desc, "Test %d: '%s' to '%s'", pos + 1, str, str);
    ft_strcpy(tmp1, str);
    strcpy(tmp2, str);
    init_str_test(tests, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_strcpy()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strcpy_test(tests, 0, "abc");
    add_to_strcpy_test(tests, 1, "abcd");
    add_to_strcpy_test(tests, 2, "abc de");
    add_to_strcpy_test(tests, 3, "abc de f");
    add_to_strcpy_test(tests, 4, "abc de\0 fg");
    display_str_test(tests, amount, "STRCPY");
}