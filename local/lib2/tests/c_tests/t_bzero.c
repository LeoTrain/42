#include "../teastes.h"

void test_bzero() {
    struct {
        char *input;
        size_t size;
        const char *expected;
    } tests[] = {
        {strdup("Hello"), 5, "\0\0\0\0\0"},
        {strdup("World"), 3, "\0\0\0ld"},
        {strdup(""), 1, "\0"},
        {strdup("12345"), 5, "\0\0\0\0\0"},
        {strdup("ft_bzero"), 9, "\0\0\0\0\0\0\0\0\0"},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        ft_bzero(tests[i].input, tests[i].size);
        if (memcmp(tests[i].input, tests[i].expected, tests[i].size) == 0) {
			print_correct(i);
        } else {
			print_incorrect(i);
        }
        free(tests[i].input);
    }

    printf("\n");
}

