#include "../teastes.h"

void	test_strdup(void)
{
    struct {
        const char *res;
        const char *expected;
    } tests[] = {
        {ft_strdup(""), strdup("")},
        {ft_strdup("abc"), strdup("abc")},
        {ft_strdup("hi"), strdup("hi")},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        if (strcmp(tests[i].res, tests[i].expected) == 0) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
        free((void *)tests[i].res);
        free((void *)tests[i].expected);
    }

    printf("\n");
}
