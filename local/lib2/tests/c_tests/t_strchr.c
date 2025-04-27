#include "../teastes.h"

void test_strchr() {
    struct {
        const char *input;
        int ch;
        const char *expected;
    } tests[] = {
        {"hello", 'l', "llo"},
        {"hello", 'o', "o"},
        {"hello", 'h', "hello"},
        {"hello", 'z', NULL},
        {"", 'a', NULL},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        const char *result = ft_strchr(tests[i].input, tests[i].ch);
        if (result != NULL && strcmp(result, tests[i].expected) == 0) {
            print_correct(i);
        } else if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }    }

    printf("\n");
}

