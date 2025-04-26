#include "../teastes.h"

void test_isascii()
{
    struct {
        char input;
        int expected;
    } tests[] = {
        {'a', 1},
        {'Z', 1},
        {'0', 1},
        {'9', 1},
        {'1', 1},
        {' ', 1},
        {'@', 1},
        {'\n', 1},
        {'\0', 1},
        {'\t', 1},
        {128, 0},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_isascii(tests[i].input);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

