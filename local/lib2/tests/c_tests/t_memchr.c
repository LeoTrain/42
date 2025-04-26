#include "../teastes.h"

void test_memchr() {
    struct {
        const char *input;
        int ch;
        size_t n;
        const char *expected;
    } tests[] = {
        {"hello", 'l', 5, "llo"},
        {"hello", 'o', 5, "o"},
        {"hello", 'h', 5, "hello"},
        {"hello", 'z', 5, NULL},
        {"", 'a', 1, NULL},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        const char *result = (const char *)ft_memchr(tests[i].input, tests[i].ch, tests[i].n);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

