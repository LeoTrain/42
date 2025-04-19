#include "libft.h"
#include "tests.h"

void    add_to_memset_test(t_test_str *tests, int pos, void *s1, int c, int len)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: setting %d '%c' in '%s1'", pos, len, c, (char *)s1);
    void *tmp1 = malloc(len);
    void *tmp2 = malloc(len);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_memset(tmp1, c, len);
    memset(tmp2, c, len);
    init_str_test(tests, pos, desc, tmp1, tmp2, memcmp(tmp1, tmp2, len) == 0);
    free(desc);
    free(tmp1);
    free(tmp2);
}

void    test_memset()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_memset_test(tests, 0, "abc", 'a', 3);
    add_to_memset_test(tests, 1, "abcd", 'b', 4);
    add_to_memset_test(tests, 2, "abc de", 'c', 6);
    add_to_memset_test(tests, 3, "abc de f", 'd', 8);
    add_to_memset_test(tests, 4, "abc de fg", 'e', 9);
    display_str_test(tests, amount, "MEMSET");
}