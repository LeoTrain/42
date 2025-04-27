#include "../teastes.h"

void test_strlcpy() {
    struct {
        const char *src;
        char *dest;
        size_t size;
        const char *expected;
    } tests[] = {
        {"Hello", strdup("World"), 5, "Hell"},
        {"World", strdup("Hello"), 3, "Wo"},
        {"12345", strdup("abcde"), 5, "1234"},
        {"ft_strlcpy", strdup("test"), 9, "ft_strlc"},
        {"", strdup("test"), 5, ""},
        {"test", strdup(""), 5, "test"},
        {"short", strdup("longer"), 7, "short"},
        {"overlap", strdup("overlap"), 9, "overlap"},
        {"12345678", strdup("abcdefgh"), 9, "12345678"},
        {"12345", strdup("abcde"), 1, ""},
        {"partial", strdup("overlap"), 4, "par"},
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
