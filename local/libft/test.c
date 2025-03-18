#include "libft.h"
#include "tests.h"
#include <stdio.h>

void test_tolower()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'a' to 'a'", ft_tolower('a'), tolower('a'), ft_tolower('a') == tolower('a'));
    init_tolower_tests(tests, 1, "Test 2: 'A' to 'a'", ft_tolower('A'), tolower('A'), ft_tolower('A') == tolower('A'));
    init_tolower_tests(tests, 2, "Test 3: 'z' to 'z'", ft_tolower('z'), tolower('z'), ft_tolower('z') == tolower('z'));
    init_tolower_tests(tests, 3, "Test 4: '9' to '9'", ft_tolower('9'), tolower('9'), ft_tolower('9') == tolower('9'));
    init_tolower_tests(tests, 4, "Test 5: ' ' to ' '", ft_tolower(' '), tolower(' '), ft_tolower(' ') == tolower(' '));
    display_int_tests(tests, 5, "TOLOWER");
}

void test_toupper()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'a' to 'A'", ft_toupper('a'), toupper('a'), ft_toupper('a') == toupper('a'));
    init_tolower_tests(tests, 1, "Test 2: 'A' to 'A'", ft_toupper('A'), toupper('A'), ft_toupper('A') == toupper('A'));
    init_tolower_tests(tests, 2, "Test 3: 'z' to 'Z'", ft_toupper('z'), toupper('z'), ft_toupper('z') == toupper('z'));
    init_tolower_tests(tests, 3, "Test 4: '9' to '9'", ft_toupper('9'), toupper('9'), ft_toupper('9') == toupper('9'));
    init_tolower_tests(tests, 4, "Test 5: ' ' to ' '", ft_toupper(' '), toupper(' '), ft_toupper(' ') == toupper(' '));
    display_int_tests(tests, 5, "TOUPPER");
}

void test_isprint()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'a' to 1", ft_isprint('a'), isprint('a'), ft_isprint('a') == isprint('a'));
    init_tolower_tests(tests, 1, "Test 2: 'A' to 1", ft_isprint('A'), isprint('A'), ft_isprint('A') == isprint('A'));
    init_tolower_tests(tests, 2, "Test 3: 'z' to 1", ft_isprint('z'), isprint('z'), ft_isprint('z') == isprint('z'));
    init_tolower_tests(tests, 3, "Test 4: '9' to 1", ft_isprint('9'), isprint('9'), ft_isprint('9') == isprint('9'));
    init_tolower_tests(tests, 4, "Test 5: ' ' to 1", ft_isprint(' '), isprint(' '), ft_isprint(' ') == isprint(' '));
    display_int_tests(tests, 5, "ISPRINT");
}

void test_isascii()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'a' to 1", ft_isascii('a'), isascii('a'), ft_isascii('a') == isascii('a'));
    init_tolower_tests(tests, 1, "Test 2: 'A' to 1", ft_isascii('A'), isascii('A'), ft_isascii('A') == isascii('A'));
    init_tolower_tests(tests, 2, "Test 3: 'z' to 1", ft_isascii('z'), isascii('z'), ft_isascii('z') == isascii('z'));
    init_tolower_tests(tests, 3, "Test 4: '9' to 1", ft_isascii('9'), isascii('9'), ft_isascii('9') == isascii('9'));
    init_tolower_tests(tests, 4, "Test 5: ' ' to 1", ft_isascii(' '), isascii(' '), ft_isascii(' ') == isascii(' '));
    display_int_tests(tests, 5, "ISASCII");
}

void test_isalnum()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'a' to 1", ft_isalnum('a'), isalnum('a'), ft_isalnum('a') == isalnum('a'));
    init_tolower_tests(tests, 1, "Test 2: 'A' to 1", ft_isalnum('A'), isalnum('A'), ft_isalnum('A') == isalnum('A'));
    init_tolower_tests(tests, 2, "Test 3: 'z' to 1", ft_isalnum('z'), isalnum('z'), ft_isalnum('z') == isalnum('z'));
    init_tolower_tests(tests, 3, "Test 4: '9' to 1", ft_isalnum('9'), isalnum('9'), ft_isalnum('9') == isalnum('9'));
    init_tolower_tests(tests, 4, "Test 5: ' ' to 1", ft_isalnum(' '), isalnum(' '), ft_isalnum(' ') == isalnum(' '));
    display_int_tests(tests, 5, "ISALNUM");
}

void test_atoi()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: '123' to 123", ft_atoi("123"), atoi("123"), ft_atoi("123") == atoi("123"));
    init_tolower_tests(tests, 1, "Test 2: '1234' to 1234", ft_atoi("1234"), atoi("1234"), ft_atoi("1234") == atoi("1234"));
    init_tolower_tests(tests, 2, "Test 3: '12345' to 12345", ft_atoi("12345"), atoi("12345"), ft_atoi("12345") == atoi("12345"));
    init_tolower_tests(tests, 3, "Test 4: '123456' to 123456", ft_atoi("123456"), atoi("123456"), ft_atoi("123456") == atoi("123456"));
    init_tolower_tests(tests, 4, "Test 5: '1234567' to 1234567", ft_atoi("1234567"), atoi("1234567"), ft_atoi("1234567") == atoi("1234567"));
    display_int_tests(tests, 5, "ATOI");
}

void test_strcmp()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'abc' to 'abc'", ft_strcmp("abc", "abc"), strcmp("abc", "abc"), ft_strcmp("abc", "abc") == strcmp("abc", "abc"));
    init_tolower_tests(tests, 1, "Test 2: 'abc' to 'abcd'", ft_strcmp("abc", "abcd"), strcmp("abc", "abcd"), ft_strcmp("abc", "abcd") == strcmp("abc", "abcd"));
    init_tolower_tests(tests, 2, "Test 3: 'abcd' to 'abc'", ft_strcmp("abcd", "abc"), strcmp("abcd", "abc"), ft_strcmp("abcd", "abc") == strcmp("abcd", "abc"));
    init_tolower_tests(tests, 3, "Test 4: 'abc' to 'abC'", ft_strcmp("abc", "abC"), strcmp("abc", "abC"), ft_strcmp("abc", "abC") == strcmp("abc", "abC"));
    init_tolower_tests(tests, 4, "Test 5: 'abC' to 'abc'", ft_strcmp("abC", "abc"), strcmp("abC", "abc"), ft_strcmp("abC", "abc") == strcmp("abC", "abc"));
    display_int_tests(tests, 5, "STRCMP");
}

void test_strncmp()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'abc' to 'abc' 3", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3), ft_strncmp("abc", "abc", 3) == strncmp("abc", "abc", 3));
    init_tolower_tests(tests, 1, "Test 2: 'abc' to 'abcd' 3", ft_strncmp("abc", "abcd", 3), strncmp("abc", "abcd", 3), ft_strncmp("abc", "abcd", 3) == strncmp("abc", "abcd", 3));
    init_tolower_tests(tests, 2, "Test 3: 'abcd' to 'abc' 3", ft_strncmp("abcd", "abc", 3), strncmp("abcd", "abc", 3), ft_strncmp("abcd", "abc", 3) == strncmp("abcd", "abc", 3));
    init_tolower_tests(tests, 3, "Test 4: 'abc' to 'abC' 3", ft_strncmp("abc", "abC", 3), strncmp("abc", "abC", 3), ft_strncmp("abc", "abC", 3) == strncmp("abc", "abC", 3));
    init_tolower_tests(tests, 4, "Test 5: 'abC' to 'abc' 3", ft_strncmp("abC", "abc", 3), strncmp("abC", "abc", 3), ft_strncmp("abC", "abc", 3) == strncmp("abC", "abc", 3));
    display_int_tests(tests, 5, "STRNCMP");
}

void    test_strlen()
{
    t_test_int tests[5];
    init_tolower_tests(tests, 0, "Test 1: 'abc' to 3", ft_strlen("abc"), strlen("abc"), ft_strlen("abc") == strlen("abc"));
    init_tolower_tests(tests, 1, "Test 2: 'abcd' to 4", ft_strlen("abcd"), strlen("abcd"), ft_strlen("abcd") == strlen("abcd"));
    init_tolower_tests(tests, 2, "Test 3: 'abc de' to 6", ft_strlen("abc de"), strlen("abc de"), ft_strlen("abc de") == strlen("abc de"));
    init_tolower_tests(tests, 3, "Test 4: 'abc de f' to 8", ft_strlen("abc de f"), strlen("abc de f"), ft_strlen("abc de f") == strlen("abc de f"));
    init_tolower_tests(tests, 4, "Test 5: 'abc de fg' to 9", ft_strlen("abc de fg"), strlen("abc de fg"), ft_strlen("abc de fg") == strlen("abc de fg"));
    display_int_tests(tests, 5, "STRLEN");
}

void    test_strdup()
{
    t_test_str tests[5];
    init_str_tests(tests, 0, "Test 1: 'abc' to 'abc'", ft_strdup("abc"), strdup("abc"), ft_strcmp(ft_strdup("abc"), strdup("abc")) == 0);
    init_str_tests(tests, 1, "Test 2: 'abcd' to 'abcd'", ft_strdup("abcd"), strdup("abcd"), ft_strcmp(ft_strdup("abcd"), strdup("abcd")) == 0);
    init_str_tests(tests, 2, "Test 3: 'abc de' to 'abc de'", ft_strdup("abc de"), strdup("abc de"), ft_strcmp(ft_strdup("abc de"), strdup("abc de")) == 0);
    init_str_tests(tests, 3, "Test 4: 'abc de f' to 'abc de f'", ft_strdup("abc de f"), strdup("abc de f"), ft_strcmp(ft_strdup("abc de f"), strdup("abc de f")) == 0);
    init_str_tests(tests, 4, "Test 5: 'abc de fg' to 'abc de fg'", ft_strdup("abc de fg"), strdup("abc de fg"), ft_strcmp(ft_strdup("abc de fg"), strdup("abc de fg")) == 0);
    display_str_tests(tests, 5, "STRDUP");
}

void    test_strcpy()
{
    t_test_str tests[5];
    char    test1[4] = "abc";
    char    test2[5] = "abcd";
    char    test3[7] = "abc de";
    char    test4[8] = "abc de f";
    char    test5[9] = "abc de fg";
    init_str_tests(tests, 0, "Test 1: 'abc' to 'abc'", ft_strcpy(test1, "abc"), strcpy(strdup("abc"), "abc"), ft_strcmp(ft_strcpy(test1, "abc"), strcpy(strdup("abc"), "abc")) == 0);
    init_str_tests(tests, 1, "Test 2: 'abcd' to 'abcd'", ft_strcpy(test2, "abcd"), strcpy(strdup("abcd"), "abcd"), ft_strcmp(ft_strcpy(test2, "abcd"), strcpy(strdup("abcd"), "abcd")) == 0);
    init_str_tests(tests, 2, "Test 3: 'abc de' to 'abc de'", ft_strcpy(test3, "abc de"), strcpy(strdup("abc de"), "abc de"), ft_strcmp(ft_strcpy(test3, "abc de"), strcpy(strdup("abc de"), "abc de")) == 0);
    init_str_tests(tests, 3, "Test 4: 'abc de f' to 'abc de f'", ft_strcpy(test4, "abc de f"), strcpy(strdup("abc de f"), "abc de f"), ft_strcmp(ft_strcpy(test4, "abc de f"), strcpy(strdup("abc de f"), "abc de f")) == 0);
    init_str_tests(tests, 4, "Test 5: 'abc de fg' to 'abc de fg'", ft_strcpy(test5, "abc de fg"), strcpy(strdup("abc de fg"), "abc de fg"), ft_strcmp(ft_strcpy(test5, "abc de fg"), strcpy(strdup("abc de fg"), "abc de fg")) == 0);
    display_str_tests(tests, 5, "STRCPY");
}

void    test_strncpy()
{
    t_test_str  tests[5];
    char    test1[4] = "abc";
    char    test2[5] = "abcd";
    char    test3[7] = "abc de";
    char    test4[9] = "abc de f";
    char    test5[10] = "abc de fg";
    init_str_tests(tests, 0, "Test 1: 'abc' to 'abc'", ft_strncpy(test1, "abc", 3), strncpy(strdup("abc"), "abc", 3), ft_strcmp(ft_strncpy(test1, "abc", 3), strncpy(strdup("abc"), "abc", 3)) == 0);
    init_str_tests(tests, 1, "Test 2: 'abcd' to 'abcd'", ft_strncpy(test2, "abcd", 4), strncpy(strdup("abcd"), "abcd", 4), ft_strcmp(ft_strncpy(test2, "abcd", 4), strncpy(strdup("abcd"), "abcd", 4)) == 0);
    init_str_tests(tests, 2, "Test 3: 'abc de' to 'abc de'", ft_strncpy(test3, "abc de", 6), strncpy(strdup("abc de"), "abc de", 6), ft_strcmp(ft_strncpy(test3, "abc de", 6), strncpy(strdup("abc de"), "abc de", 6)) == 0);
    init_str_tests(tests, 3, "Test 4: 'abc de f' to 'abc de f'", ft_strncpy(test4, "abc de f", 7), strncpy(strdup("abc de f"), "abc de f", 7), ft_strcmp(ft_strncpy(test4, "abc de f", 7), strncpy(strdup("abc de f"), "abc de f", 7)) == 0);
    init_str_tests(tests, 4, "Test 5: 'abc de fg' to 'abc de fg'", ft_strncpy(test5, "abc de fg", 8), strncpy(strdup("abc de fg"), "abc de fg", 8), ft_strcmp(ft_strncpy(test5, "abc de fg", 8), strncpy(strdup("abc de fg"), "abc de fg", 8)) == 0);
    display_str_tests(tests, 5, "STRNCPY");
}

void safe_strcat_test(t_test_str *test, int pos, char *desc, char *s1, char *s2) {
    char *tmp1 = malloc(strlen(s1) + strlen(s2) + 1);
    char *tmp2 = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strcat(tmp1, s2);
    strcat(tmp2, s2);
    init_str_tests(test, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
}

void    test_strcat()
{
    t_test_str tests[5];
    safe_strcat_test(tests, 0, "Test 1: 'abc' to 'abcdef'", "abc", "def");
    safe_strcat_test(tests, 1, "Test 2: 'abc' to 'abcdef'", "abc", "defg");
    safe_strcat_test(tests, 2, "Test 3: '' to 'fgh'", "", "fgh");
    safe_strcat_test(tests, 3, "Test 4: 'abc de f' to 'abc de fghi'", "abc de f", "ghi");
    safe_strcat_test(tests, 4, "Test 5: 'abc de fg' to 'abc de fghij'", "abc de fg", "hij");
    display_str_tests(tests, 5, "STRCAT");
}

void    safe_strncat_test(t_test_str *test, int pos, char *desc, char *s1, char *s2, int n)
{
    char *tmp1 = malloc(strlen(s1) + strlen(s2) + 1);
    char *tmp2 = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strncat(tmp1, s2, n);
    strncat(tmp2, s2, n);
    init_str_tests(test, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
}

void    test_strncat()
{
    t_test_str tests[5];
    safe_strncat_test(tests, 0, "Test 1: 'abc' to 'abcdef'", "abc", "def", 3);
    safe_strncat_test(tests, 1, "Test 2: 'abc' to 'abcdef'", "abc", "defg", 4);
    safe_strncat_test(tests, 2, "Test 3: '' to 'fgh'", "", "fgh", 3);
    safe_strncat_test(tests, 3, "Test 4: 'abc de f' to 'abc de fghi'", "abc de f", "ghi", 3);
    safe_strncat_test(tests, 4, "Test 5: 'abc de fg' to 'abc de fghij'", "abc de fg", "hij", 3);
    display_str_tests(tests, 5, "STRNCAT");
}

void    safe_strlcat_test(t_test_str *test, int pos, char *desc, char *s1, char *s2, int n)
{
    char *tmp1 = malloc(strlen(s1) + strlen(s2) + 1);
    char *tmp2 = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(tmp1, s1);
    strcpy(tmp2, s1);
    ft_strlcat(tmp1, s2, n);
    strncat(tmp2, s2, n);
    init_str_tests(test, pos, desc, tmp1, tmp2, strcmp(tmp1, tmp2) == 0);
}

void    test_strlcat()
{
    t_test_str tests[5];
    safe_strlcat_test(tests, 0, "Test 1: 'abc' to 'abcdef'", "abc", "def", 3);
    safe_strlcat_test(tests, 1, "Test 2: 'abc' to 'abcdef'", "abc", "defg", 4);
    safe_strlcat_test(tests, 2, "Test 3: '' to 'fgh'", "", "fgh", 3);
    safe_strlcat_test(tests, 3, "Test 4: 'abc de f' to 'abc de fghi'", "abc de f", "ghi", 3);
    safe_strlcat_test(tests, 4, "Test 5: 'abc de fg' to 'abc de fghij'", "abc de fg", "hij", 3);
    display_str_tests(tests, 5, "STRLCAT");
}

void    test_strchr()
{
    printf("\nSTRCHR START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strchr("abc", 'a'), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strchr("abc", 'b'), "bc") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strchr("abc", 'c'), "c") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strchr("abc", 'd'), "") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strchr("abc def ghi", 'e'), "ef ghi") == 0 ? "OK" : "KO");
    printf("STRCHR END\n");
}

void    test_strrchr()
{
    printf("\nSTRRCHR START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strrchr("abc", 'a'), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strrchr("abcba", 'b'), "ba") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strrchr("abc", 'c'), "c") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strrchr("abcd bef", 'd'), "d bef") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strrchr("abc def ghi", 'e'), "ef ghi") == 0 ? "OK" : "KO");
    printf("STRRCHR END\n");
}

void    test_strstr()
{
    printf("\nSTRSTR START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strstr("abc", "a"), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strstr("abc", "b"), "bc") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strstr("abc", "c"), "c") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strstr("They are great", "rea"), "reat") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strstr("They are great", "are"), "are great") == 0 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strcmp(ft_strstr("They are great", "great"), "great") == 0 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strcmp(ft_strstr("I am a Leonardo ar", "ar"), "ardo ar") == 0 ? "OK" : "KO");
    printf("STRSTR END\n");
}

void    test_strnstr()
{
    printf("\nSTRNSTR START\n");
    printf("TEST 1: %s\n", ft_strcmp(ft_strnstr("abc", "a", 3), "abc") == 0 ? "OK" : "KO");
    printf("TEST 2: %s\n", ft_strcmp(ft_strnstr("abc", "b", 3), "bc") == 0 ? "OK" : "KO");
    printf("TEST 3: %s\n", ft_strcmp(ft_strnstr("abc", "c", 3), "c") == 0 ? "OK" : "KO");
    printf("TEST 4: %s\n", ft_strcmp(ft_strnstr("They are great", "rea", 14), "reat") == 0 ? "OK" : "KO");
    printf("TEST 5: %s\n", ft_strcmp(ft_strnstr("They are great", "rea", 9), "") == 0 ? "OK" : "KO");
    printf("TEST 6: %s\n", ft_strcmp(ft_strnstr("They are great", "are", 14), "are great") == 0 ? "OK" : "KO");
    printf("TEST 7: %s\n", ft_strcmp(ft_strnstr("They are great", "are", 9), "are great") == 0 ? "OK" : "KO");
    printf("TEST 8: %s\n", ft_strcmp(ft_strnstr("They are great", "great", 14), "great") == 0 ? "OK" : "KO");
    printf("STRNSTR END\n");
}

void    test_memset()
{
    char    test1[4] = "abc";
    char    test2[5] = "abcd";
    char    test3[7] = "abc de";
    char    test4[8] = "abc de f";
    char    test5[9] = "abc de fg";
    int    test1Passed;
    int    test2Passed;
    int    test3Passed;
    int    test4Passed;
    int    test5Passed;
    char *expected1 = memset(strdup("abc"), 'z', 3);
    char *expected2 = memset(strdup("abcd"), 'z', 4);
    char *expected3 = memset(strdup("abc de"), 'z', 6);
    char *expected4 = memset(strdup("abc de f"), 'a', 7);
    char *expected5 = memset(strdup("abc de fg"), 'z', 8);

    test1Passed = strcmp(ft_memset(test1, 'z', 3), expected1) == 0;
    test2Passed = strcmp(ft_memset(test2, 'z', 4), expected2) == 0;
    test3Passed = strcmp(ft_memset(test3, 'z', 6), expected3) == 0;
    test4Passed = strcmp(ft_memset(test4, 'a', 7), expected4) == 0;
    test5Passed = strcmp(ft_memset(test5, 'z', 8), expected5) == 0;

    int allTestsPassed = test1Passed && test2Passed && test3Passed && test4Passed && test5Passed;

    if (allTestsPassed)
        printf("MEMSET OK\n");
    else
    {
        printf("MEMSET KO\n");
        int testsPassed[] = {test1Passed, test2Passed, test3Passed, test4Passed, test5Passed};
        char *recieved[] = {test1, test2, test3, test4, test5};
        char *expected[] = {expected1, expected2, expected3, expected4, expected5};
        for (int i = 0; i < 5; i++)
        {
            if (!testsPassed[i])
            {
                printf("TEST %d FAILED\n", i + 1);
                printf("   Expected: %s\n", expected[i]);
                printf("   Recieved: %s\n", recieved[i]);
            }
                
        }
    }
}

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
}

int main()
{
    run_tests();
    return 0;
}