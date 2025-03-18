#include "libft.h"
#include <stdio.h>

void test_tolower()
{
    printf("\nTOLOWER START\n");
    printf("TEST 1: %d\n", ft_tolower('a') == 'a');
    printf("TEST 2: %d\n", ft_tolower('A') == 'a');
    printf("TEST 3: %d\n", ft_tolower('z') == 'z');
    printf("TEST 4: %d\n", ft_tolower('9') == '9');
    printf("TEST 5: %d\n", ft_tolower(' ') == ' ');
    printf("TOLOWER END\n");
}

void test_toupper()
{
    printf("\nTOUPPER START\n");
    printf("TEST 1: %d\n", ft_toupper('a') == 'A');
    printf("TEST 2: %d\n", ft_toupper('A') == 'A');
    printf("TEST 3: %d\n", ft_toupper('z') == 'Z');
    printf("TEST 4: %d\n", ft_toupper('9') == '9');
    printf("TEST 5: %d\n", ft_toupper(' ') == ' ');
    printf("TOUPPER END\n");
}

void test_isprint()
{
    printf("\nISPRINT START\n");
    printf("TEST 1: %s\n", ft_isprint('a') == 1 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_isprint('A') == 1 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_isprint('z') == 1 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_isprint('9') == 1 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_isprint(' ') == 1 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_isprint(31) == 0 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_isprint(127) == 0 ? "OK" : "KO");
    printf("ISPRINT END\n");
}

void test_isascii()
{
    printf("\nISASCII START\n");
    printf("TEST 1: %s\n", ft_isascii('a') == 1 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_isascii('A') == 1 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_isascii('z') == 1 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_isascii('9') == 1 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_isascii(' ') == 1 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_isascii(31) == 1 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_isascii(127) == 1 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_isascii(128) == 0 ? "OK" : "KO");
    printf("ISASCII END\n");
}

void test_isalnum()
{
    printf("\nISALNUM START\n");
    printf("TEST 1: %s\n", ft_isalnum('a') == 1 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_isalnum('A') == 1 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_isalnum('z') == 1 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_isalnum('9') == 1 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_isalnum(' ') == 0 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_isalnum(31) == 0 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_isalnum(127) == 0 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_isalnum(128) == 0 ? "OK" : "KO");
    printf("ISALNUM END\n");
}

void test_atoi()
{
    printf("\nATOI START\n");
    printf("TEST 1: %s\n", ft_atoi("42") == 42 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_atoi(" 42") == 42 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_atoi("42 ") == 42 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_atoi(" 42 ") == 42 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_atoi(" 42 42") == 42 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_atoi(" 42 42 ") == 42 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_atoi(" +42abc32") == 42 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_atoi(" -42abc32") == -42 ? "OK" : "KO");
    printf("TEST 9: %s\n", ft_atoi(" +-42abc32") == 0 ? "OK" : "KO");
    printf("\nATOI END\n");
}


int main()
{
    test_atoi();
    return 0;
}