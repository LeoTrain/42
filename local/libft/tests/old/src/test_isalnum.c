#include "../../libft/libft.h"
#include "../tests.h"

void    add_to_isalnum_test(t_test_bool *tests, int pos, int c)
{
    char *desc = (char *)malloc(100);
    sprintf(desc, "Test %d: '%c' to %d", pos + 1, c, isalnum(c));
    init_bool_test(tests, pos, desc, ft_isalnum(c), isalnum(c));
}

void    test_isalnum()
{
    int total = 8;
    t_test_bool tests[total];
    add_to_isalnum_test(tests, 0, 'a');
    add_to_isalnum_test(tests, 1, '-');
    add_to_isalnum_test(tests, 2, 'z');
    add_to_isalnum_test(tests, 3, '9');
    add_to_isalnum_test(tests, 4, ' ');
    add_to_isalnum_test(tests, 5, '+');
    add_to_isalnum_test(tests, 6, '%');
    add_to_isalnum_test(tests, 7, 0);
    display_bool_test(tests, total, "ISALNUM");
    for (int i = 0; i < total; i++)
        free(tests[i].description);
}
