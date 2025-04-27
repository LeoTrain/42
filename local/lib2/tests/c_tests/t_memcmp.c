#include "../teastes.h"

void test_memcmp() {
    struct {
        const char *s1;
        const char *s2;
        size_t n;
        int expected;
    } tests[] = {
        {"hello", "hello", 5, 0},
        {"hello", "hell", 4, 0},
        {"hello", "hellz", 4, 0},
        {"hello", "hellz", 5, -11},
        {"hellz", "hello", 5, 11},
        {"", "", 1, 0},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_memcmp(tests[i].s1, tests[i].s2, tests[i].n);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

