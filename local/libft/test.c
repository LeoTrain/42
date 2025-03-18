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

void test_strcmp()
{
    printf("\nSTRCMP START\n");
    printf("TEST 1: %s\n", ft_strcmp("abc", "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp("abc", "abcd") == -100 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp("abcd", "abc") == 100 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp("abc", "abC") == 32 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp("abC", "abc") == -32 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strcmp("abc", "abD") == 31 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strcmp("abD", "abc") == -31 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_strcmp("abc", "ab") == 99 ? "OK" : "KO");
    printf("STRCMP END\n");
}

void test_strncmp()
{
    printf("\nSTRNCMP START\n");
    printf("TEST 1: %s\n", ft_strncmp("abc", "abc", 3) == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strncmp("abc", "abcd", 3) == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strncmp("abcd", "abc", 3) == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strncmp("abc", "abC", 3) == 32 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strncmp("abC", "abc", 3) == -32 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strncmp("abc", "abD", 3) == 31 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strncmp("abD", "abc", 3) == -31 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_strncmp("abc", "ab", 3) == 99 ? "OK" : "KO");
    printf("TEST 9: %s\n", ft_strncmp("abc", "abcd", 4) == -100 ? "OK" : "KO");
    printf("TEST 10: %s\n", ft_strncmp("abcd", "abc", 4) == 100 ? "OK" : "KO");
    printf("STRNCMP END\n");
}

void    test_strlen()
{
    printf("\nSTRLEN START\n");
    printf("TEST 1: %s\n", ft_strlen("abc") == 3 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strlen("abcd") == 4 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strlen("abcde") == 5 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strlen("abcdef") == 6 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strlen("abcdefg") == 7 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strlen("abcdefgh") == 8 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strlen("abcdefghi") == 9 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_strlen("abcdefghij") == 10 ? "OK" : "KO");
    printf("STRLEN END\n");
}

void    test_strdup()
{
    char *test1 = ft_strdup("abc");
    char *test2 = ft_strdup("abcd");
    char *test3 = ft_strdup("abc de");
    char *test4 = ft_strdup("abc de f");
    char *test5 = ft_strdup("abc de fg");
    printf("\nSTRDUP START\n");
    printf("TEST 1: %s\n", ft_strcmp(test1, "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(test2, "abcd") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(test3, "abc de") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(test4, "abc de f") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(test5, "abc de fg") == 0 ? "OK" : "KO");
    printf("STRDUP END\n");
}

void    test_strcpy()
{
    char test1[4];
    char test2[5];
    char test3[7];
    char test4[8];
    char test5[9];
    printf("\nSTRCPY START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strcpy(test1, "abc"), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strcpy(test2, "abcd"), "abcd") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strcpy(test3, "abc de"), "abc de") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strcpy(test4, "abc de f"), "abc de f") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strcpy(test5, "abc de fg"), "abc de fg") == 0 ? "OK" : "KO");
    printf("STRCPY END\n");
}

void    test_strncpy()
{
    char    test1[4];
    char    test2[5];
    char    test3[7];
    char    test4[9];
    char    test5[10];
    printf("\nSTRNCPY START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strncpy(test1, "abc", 3), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strncpy(test1, "abcd", 3), "abc") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strncpy(test1, "abcd", 4), "abcd") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strncpy(test2, "abcd", 5), "abcd") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strncpy(test3, "abc de", 7), "abc de") == 0 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strcmp(ft_strncpy(test4, "abc de f", 8), "abc de f") == 0 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strcmp(ft_strncpy(test5, "abc de fg", 9), "abc de fg") == 0 ? "OK" : "KO");
    printf("STRNCPY END\n");
}

void    test_strcat()
{
    char    test1[7] = "abc";
    char    test2[8] = "abc";
    char    test3[10] = "abc de";
    char    test4[11] = "abc de f";
    char    test5[12] = "abc de fg";
    printf("\nSTRCAT START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strcat(test1, "def"), "abcdef") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strcat(test2, "defg"), "abcdefg") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strcat(test3, " fgh"), "abc de fgh") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strcat(test4, "ghi"), "abc de fghi") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strcat(test5, "hij"), "abc de fghij") == 0 ? "OK" : "KO");
    printf("STRCAT END\n");
}

void    test_strncat()
{
    char    test1[7] = "abc";
    char    test2[8] = "abc";
    char    test3[10] = "";
    char    test4[11] = "abc de f";
    char    test5[12] = "abc de fg";
    printf("\nSTRNCAT START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strncat(test1, "def", 3), "abcdef") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strncat(test2, "defg", 3), "abcdef") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strncat(test3, "fgh", 3), "fgh") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strncat(test4, "ghi", 3), "abc de fghi") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strncat(test5, "hij", 3), "abc de fghij") == 0 ? "OK" : "KO");
    printf("STRNCAT END\n");
}

void    test_strlcat()
{
    char    test1[7] = "abc";
    char    test2[8] = "abc";
    char    test3[10] = "";
    char    test4[12] = "abc de f";
    char    test5[13] = "abc de fg";
    printf("\nSTRLCAT START\n");
    printf("TEST 1: %s\n", ft_strlcat(test1, "def", 7) == 6 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strlcat(test2, "defg", 8) == 7 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strlcat(test3, "fgh", 10) == 3 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strlcat(test4, "ghi", 12) == 11 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strlcat(test5, "hij", 13) == 12 ? "OK" : "KO");
    printf("STRLCAT END\n");
}

int main()
{
    test_strlcat();
    return 0;
}