#include "../teastes.h"

void test_strlcpy() {
    struct {
        const char *src;
        char *dest;
        size_t size;
        const char *expected;
    } tests[] = {
        {"Hello", strdup("World"), 5, "Hell"},
        {"World", strdup("Hello"), 3, "Hel"},
        {"12345", strdup("abcde"), 5, "1234"},
        {"ft_strlcpy", strdup("test"), 9, "ft_strl"},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        ft_strlcpy(tests[i].dest, tests[i].src, tests[i].size);
        if (strcmp(tests[i].dest, tests[i].expected) == 0) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
        free(tests[i].dest);
    }

    printf("\n");
}

