#include "../teastes.h"

void test_atoi() {
    struct {
        const char *input;
        int expected;
    } tests[] = {
        {"123", 123},
        {"-456", -456},
        {"0", 0},
        {"  42", 42},
        {"  -42", -42},
        {"abc", 0},
        {"2147483647", 2147483647},
        {"-2147483648", -2147483647 - 1},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int result = ft_atoi(tests[i].input);
        if (result == tests[i].expected) {
			print_correct(i);
        } else {
			print_incorrect(i);
        }
    }

    printf("\n");
}

