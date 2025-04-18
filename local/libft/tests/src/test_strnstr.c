#include "../../libft/libft.h"
#include "../tests.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = strlen(needle);
    if (needle_len == 0)
        return (char *)haystack;

    for (size_t i = 0; i < len && haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0] && strncmp(&haystack[i], needle, needle_len) == 0)
            return (char *)&haystack[i];
    }
    return NULL;
}

void    add_to_strnstr_test(t_test_str *tests, int pos, char *s1, char *s2, unsigned int n)
{
    char *desc = (char *)malloc(sizeof(char) * 200);
    if (!desc)
        *desc = '\0';
    sprintf(desc, "Test %d: Searching '%s' in '%s'", pos + 1, s2, s1);
    char *res1 = (char*)strnstr(s1, s2, n);
    char *res2 = ft_strnstr(s1, s2, n);
    if (!res1 || !res2)
        init_str_test(tests, pos, desc, "NULL", "NULL", 1);
    else
        init_str_test(tests, pos, desc, res1, res2, strcmp(res1, res2) == 0);
    free(desc);
}

void test_strnstr()
{
    int amount = 5;
    t_test_str tests[amount];
    add_to_strnstr_test(tests, 0, "abc", "a", 3);
    add_to_strnstr_test(tests, 1, "abcba", "b", 4);
    add_to_strnstr_test(tests, 2, "abc", "c", 3);
    add_to_strnstr_test(tests, 3, "abcd bef", "l", 8);
    add_to_strnstr_test(tests, 4, "abc def ghi", "e", 11);
    display_str_test(tests, amount, "STRNSTR");
}
