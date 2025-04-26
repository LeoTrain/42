#include "../teastes.h"

void test_strlcat() {
    struct {
        const char *src;
        char *dest;
        size_t size;
        const char *expected;
    } tests[] = {
        {"World", strdup("Hello"), 10, "HelloWorld"},
        {"12345", strdup("abcde"), 10, "abcde12345"},
        {"test", strdup("ft_strlcat"), 15, "ft_strlcat"},
        {"Hello", strdup("World"), 5, "World"}, // Dest size is less than src size
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        ft_strlcat(tests[i].dest, tests[i].src, tests[i].size);
        if (strcmp(tests[i].dest, tests[i].expected) == 0) {
            print_correct(i);
        } else {
            print_incorrect(i);
        }
        free(tests[i].dest);
    }

    printf("\n");
}

