#include "libft.h"
#include "tests.h"

void    add_to_strlcat_test(t_test_str *tests, int pos, char *s1, char *s2)
{
    int size = strlen(s1) + strlen(s2) + 1;
    char *tmp1 = malloc(size);
    char *tmp2 = malloc(size);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    strlcat(tmp1, s2, size);
    ft_strlcat(tmp2, s2, size);
    init_str_test(tests, pos, "Test", tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    free(tmp1);
    free(tmp2);
}

void    test_strlcat()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strlcat_test(tests, 0, "abc", "def");
    add_to_strlcat_test(tests, 1, "abc", "defg");
    add_to_strlcat_test(tests, 2, "", "fgh");
    add_to_strlcat_test(tests, 3, "abc de f", "ghi");
    add_to_strlcat_test(tests, 4, "abc d\0e fg", "hij");
    display_str_test(tests, amount, "STRLCAT");
}