#include "tests.h"

void    run_tests()
{
    test_tolower();
    test_toupper();
    test_isprint();
    test_isascii();
    test_isalnum();
    test_atoi();
    test_strcmp();
    test_strncmp();
    test_strlen();
    test_strdup();
    test_strcpy();
    test_strncpy();
    test_strcat();
    test_strncat();
    test_strlcat();
    test_strchr();
    test_strrchr();
    test_strstr();
    test_strnstr();
    test_memset();
    test_bzero();
    test_memcpy();
	test_memccpy();
	test_memmove();
//     test_memchr();
}

int main()
{
    run_tests();
    return 0;
}
