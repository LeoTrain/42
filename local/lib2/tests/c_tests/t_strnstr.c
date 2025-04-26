#include "../teastes.h"

void test_strnstr() {
    struct {
        const char *haystack;
        const char *needle;
        size_t len;
        const char *expected;
    } tests[] = {
        {"hello", "ll", 5, "llo"},
        {"hello", "he", 5, "hello"},
        {"hello", "lo", 5, "lo"},
        {"hello", "z", 5, NULL},
        {"", "a", 1, NULL},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        const char *result = ft_strnstr(tests[i].haystack, tests[i].needle, tests[i].len);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}
