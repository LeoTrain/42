#include "libft.h"
#include "tests.h"

void    add_to_strcat_test(t_test_str *test, int pos, char *s1, char *s2)
{
    char *tmp1 = malloc(strlen(s1) + strlen(s2) + 1);
    char *tmp2 = malloc(strlen(s1) + strlen(s2) + 1);
    char *desc = malloc(sizeof(char) * 200);
    sprintf(desc, "Test %d: catting '%s' to '%s'", pos, s2, s1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strcat(tmp1, s2);
    strcat(tmp2, s2);
    init_str_test(test, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_strcat()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strcat_test(tests, 0, "abc", "def");
    add_to_strcat_test(tests, 1, "abc", "defg");
    add_to_strcat_test(tests, 2, "", "fgh");
    add_to_strcat_test(tests, 3, "abc de f", "ghi");
    add_to_strcat_test(tests, 4, "abc de \0fg", "hij");
    display_str_test(tests, amount, "STRCAT");
}