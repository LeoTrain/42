#include "libft.h"
#include "tests.h"

void    add_to_strncat_test(t_test_str *tests, int pos, char *s1, char *s2, unsigned int n)
{
    char *desc = (char *)malloc(sizeof(char) * 200);
    char *tmp1 = (char *)malloc(sizeof(char) * 200);
    char *tmp2 = (char *)malloc(sizeof(char) * 200);
    sprintf(desc, "Test %d: concat '%s' to '%s' max %d positions", pos + 1, s1, s2, n);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strncat(tmp1, s2, n);
    strncat(tmp2, s2, n);
    init_str_test(tests, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void test_strncat()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strncat_test(tests, 0, "abc", "def", 3);
    add_to_strncat_test(tests, 1, "abc", "defg", 4);
    add_to_strncat_test(tests, 2, "", "fgh", 3);
    add_to_strncat_test(tests, 3, "abc de f", "ghiaab", 1);
    add_to_strncat_test(tests, 4, "abc de fg", "hijfidfjdi", 3);
    display_str_test(tests, amount, "STRNCAT");
}