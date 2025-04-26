#include "../teastes.h"

void test_memset() {
    struct {
        char *input;
        int value;
        size_t size;
        const char *expected;
    } tests[] = {
        {strdup("Hello"), 'x', 5, "xxxxx"},
        {strdup("World"), 'y', 3, "yyyld"},
        {strdup(""), 'z', 1, "z"},
        {strdup("12345"), '0', 5, "00000"},
        {strdup("ft_memset"), 'a', 9, "aaaaaaaaa"},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        ft_memset(tests[i].input, tests[i].value, tests[i].size);
        if (strcmp(tests[i].input, tests[i].expected) == 0) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
        free(tests[i].input);
    }

    printf("\n");
}

