#include "../teastes.h"

void test_strrchr() {
    struct {
        const char *input;
        int ch;
        const char *expected;
    } tests[] = {
        {"hello", 'l', "lo"},
        {"hello", 'o', "o"},
        {"hello", 'h', "hello"},
        {"hello", 'z', NULL},
        {"", 'a', NULL},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        const char *result = ft_strrchr(tests[i].input, tests[i].ch);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

