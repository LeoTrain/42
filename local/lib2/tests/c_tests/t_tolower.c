#include "../teastes.h"

void test_tolower() {
    struct {
        int input;
        int expected;
    } tests[] = {
        {'A', 'a'},
        {'Z', 'z'},
        {'a', 'a'},
        {'z', 'z'},
        {'1', '1'},
        {' ', ' '},
        {'\n', '\n'},
        {'\0', '\0'},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_tolower(tests[i].input);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

