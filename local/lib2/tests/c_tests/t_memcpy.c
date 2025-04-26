#include "../teastes.h"

void test_memcpy() {
    struct {
        const char *src;
        char *dest;
        size_t size;
        const char *expected;
    } tests[] = {
        {"Hello", strdup("World"), 5, "Hello"},
        {"World", strdup("Hello"), 3, "Worlo"},
        {"12345", strdup("abcde"), 5, "12345"},
        {"ft_memcpy", strdup("test"), 4, "ft_t"},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        ft_memcpy(tests[i].dest, tests[i].src, tests[i].size);
        if (memcmp(tests[i].dest, tests[i].expected, tests[i].size) == 0) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
        free(tests[i].dest);
    }

    printf("\n");
}

