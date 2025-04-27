#include "../teastes.h"

void test_calloc() {
    struct {
        void *input;
        const void *expected;
		size_t	size;
    } tests[] = {
        {ft_calloc(10, 3), calloc(10, 3), 3},
        {ft_calloc(0, 3), calloc(0, 3), 3},
        {ft_calloc(10, 0), calloc(10, 0), 0},
        {ft_calloc(0, 0), calloc(0, 0), 0},
        {ft_calloc(1, 1), calloc(1, 1), 1},
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

