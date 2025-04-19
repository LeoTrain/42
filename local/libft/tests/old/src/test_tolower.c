#include "tests.h"
#include "libft.h"

void add_to_tolower_test(t_test_int *tests, int pos, int c)
{
    tests[pos].description = (char *)malloc(100);
    int res = ft_tolower(c);
    int exp = tolower(c);
    sprintf(tests[pos].description, "Test %d: '%c' to '%c'", pos + 1, res, exp);
    tests[pos].result = res;
    tests[pos].expected = exp;
    tests[pos].passed = res == exp;
}


void test_tolower()
{
    int total = 5;
    t_test_int tests[total];
    add_to_tolower_test(tests, 0, 'a');
    add_to_tolower_test(tests, 1, 'A');
    add_to_tolower_test(tests, 2, 'z');
    add_to_tolower_test(tests, 3, '9');
    add_to_tolower_test(tests, 4, ' ');
    display_int_test(tests, total, "TOLOWER");
    for (int i = 0; i < total; i++)
        free(tests[i].description);
}