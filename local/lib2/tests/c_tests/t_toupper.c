#include "../teastes.h"

void test_toupper() {
    struct {
        int input;
        int expected;
    } tests[] = {
        {'a', 'A'},
        {'z', 'Z'},
        {'A', 'A'},
        {'Z', 'Z'},
        {'1', '1'},
        {' ', ' '},
        {'\n', '\n'},
        {'\0', '\0'},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_toupper(tests[i].input);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

