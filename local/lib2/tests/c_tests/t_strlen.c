#include "../teastes.h"

void test_strlen() {
    struct {
        const char *input;
        size_t expected;
    } tests[] = {
        {"Hello", 5},
        {"World", 5},
        {"", 0},
        {"12345", 5},
        {"ft_strlen", 9},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        size_t result = ft_strlen(tests[i].input);
        if (result == tests[i].expected) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
    }

    printf("\n");
}

