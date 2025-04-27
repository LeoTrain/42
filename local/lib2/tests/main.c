#include "teastes.h"

int main(void)
{
	print_fname("isalpha");
    test_isalpha();
	print_fname("isdigit");
    test_isdigit();
	print_fname("isalnum");
    test_isalnum();
	print_fname("isascii");
    test_isascii();
	print_fname("isprint");
    test_isprint();
	print_fname("strlen");
    test_strlen();
	print_fname("memset");
    test_memset();
	print_fname("bzero");
    test_bzero();
	print_fname("memcpy");
    test_memcpy();
	print_fname("memmove");
    test_memmove();
	print_fname("strlcpy");
    test_strlcpy();
	print_fname("strlcat");
    test_strlcat();
	print_fname("toupper");
	test_toupper();
	print_fname("tolower");
	test_tolower();
	print_fname("strchr");
	test_strchr();
	print_fname("strrchr");
	test_strrchr();
	print_fname("strncmp");
	test_strncmp();
	print_fname("memchr");
	test_memchr();
	print_fname("memcmp");
	test_memcmp();
	print_fname("strnstr");
	test_strnstr();
	print_fname("atoi");
	test_atoi();
    return (0);
}

