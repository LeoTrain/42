#ifndef TESTS_H
#define TESTS_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct  s_test_int
{
    char    *description;
    int     result;
    int     expected;
    int     passed;
}           t_test_int;

typedef struct s_test_str
{
    char    *description;
    char    *result;
    char    *expected;
    int     passed;
}          t_test_str;

void    init_tolower_tests(t_test_int *tests, int position, char *description, int result, int expected, int passed)
{
    tests[position].description = description;
    tests[position].result = result;
    tests[position].expected = expected;
    tests[position].passed = passed;
}

void init_str_tests(t_test_str *tests, int position, char *description, char *result, char *expected, int passed)
{
    tests[position].description = description;
    tests[position].result = result;
    tests[position].expected = expected;
    tests[position].passed = passed;
}

void    display_int_tests(t_test_int *tests, int amount, char *name)
{
    int passed = 1;
    for (int i = 0; i < amount; i++)
        if (!tests[i].passed)
            passed = 0;
    if (passed)
        printf("✅ %s OK\n", name);
    else
    {
        printf("❌ %s KO\n", name);
        for (int i = 0; i < amount; i++)
        {
            if (!tests[i].passed)
            {
                printf("%s\n", tests[i].description);
                printf("   Result: %d\n", tests[i].result);
                printf("   Expected: %d\n", tests[i].expected);
            }
        }
    }
}

void    display_str_tests(t_test_str *tests, int amount, char *name)
{
    int passed = 1;
    for (int i = 0; i < amount; i++)
        if (!tests[i].passed)
            passed = 0;
    if (passed)
        printf("✅ %s OK\n", name);
    else
    {
        printf("❌ %s KO\n", name);
        for (int i = 0; i < amount; i++)
        {
            if (!tests[i].passed)
            {
                printf("%s\n", tests[i].description);
                printf("   Result: %s\n", tests[i].result);
                printf("   Expected: %s\n", tests[i].expected);
            }
        }
    }
}

#endif