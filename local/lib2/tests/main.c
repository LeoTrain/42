#include "teastes.h"

int main(void)
{
    printf("isalpha: ");
    test_isalpha();
    printf("isdigit: ");
    test_isdigit();
    printf("isalnum: ");
    test_isalnum();
    printf("isascii: ");
    test_isascii();
    printf("isprint: ");
    test_isprint();
    printf("strlen: ");
    test_strlen();
    printf("memset: ");
    test_memset();
    printf("bzero: ");
    test_bzero();
    printf("memcpy: ");
    test_memcpy();
    printf("memmove: ");
    test_memmove();
    printf("strlcpy: ");
    test_strlcpy();
    printf("strlcat: ");
    test_strlcat();
	printf("toupper: ");
	test_toupper();
	printf("tolower: ");
	test_tolower();
	printf("strchr: ");
	test_strchr();
	printf("strrchr: ");
	test_strrchr();
	printf("strncmp: ");
	test_strncmp();
	printf("memchr: ");
	test_memchr();
	printf("memcmp: ");
	test_memcmp();
	printf("strnstr: ");
	test_strnstr();
	printf("atoi: ");
	test_atoi();
    return (0);
}

