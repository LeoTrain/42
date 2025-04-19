#include "../tests.h"
#include "../../libft/libft.h"

void add_to_isprint_test(t_test_bool *tests, int pos, int c)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%c' to %d", pos + 1, c, isprint(c));
    init_bool_test(tests, pos, desc, ft_isprint(c), isprint(c));
}

void    test_isprint()
{
    int total = 5;
    t_test_bool tests[total];
    add_to_isprint_test(tests, 0, 'a');
    add_to_isprint_test(tests, 1, 'A');
    add_to_isprint_test(tests, 2, 'z');
    add_to_isprint_test(tests, 3, '9');
    add_to_isprint_test(tests, 4, ' ');
    display_bool_test(tests, total, "ISPRINT");
    for (int i = 0; i < total; i++)
        free(tests[i].description);
}
