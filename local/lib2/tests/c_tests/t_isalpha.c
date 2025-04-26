#include "../teastes.h"

void test_isalpha() {
    struct {
        char input;
        int expected;
    } tests[] = {
        {'a', 1},
        {'Z', 1},
        {'1', 0},
        {' ', 0},
        {'@', 0},
        {'\n', 0},
        {'A', 1},
        {'z', 1},
        {'\0', 0},
        {'\t', 0},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_isalpha(tests[i].input);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }
    printf("\n");
}
