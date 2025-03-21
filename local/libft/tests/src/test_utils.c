#include "tests.h"

void init_int_test(t_test_int *tests, int position, char *description, int result, int expected, int passed)
{
    tests[position].description = strdup(description);
    tests[position].result = result ? result : 0;
    tests[position].expected = expected ? expected : 0;
    tests[position].passed = passed;
}

void init_str_test(t_test_str *tests, int position, char *description, char *result, char *expected, int passed)
{
    tests[position].description = strdup(description);
    tests[position].result = result ? strdup(result) : NULL;
    tests[position].expected = expected ? strdup(expected) : NULL;
    tests[position].passed = passed;
}

int calculate_spaces_after_name(char *str)
{
    int max_len = 10;
    int len = strlen(str);
    return max_len - len;
}

void display_int_test(t_test_int *tests, int amount, char *name)
{
    int passed = 1;
    for (int i = 0; i < amount; i++)
        if (!tests[i].passed)
            passed = 0;
    if (passed)
    {
        printf("✅   %s", name);
        for (int i = 0; i < calculate_spaces_after_name(name); i++)
            printf(" ");
        printf("OK\n");
    }
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

void display_str_test(t_test_str *tests, int amount, char *name)
{
    int passed = 1;
    for (int i = 0; i < amount; i++)
        if (!tests[i].passed)
            passed = 0;
    if (passed)
    {
        printf("✅   %s", name);
        for (int i = 0; i < calculate_spaces_after_name(name); i++)
            printf(" ");
        printf("OK\n");
    }
    else
    {
        printf("❌ %s KO\n", name);
        for (int i = 0; i < amount; i++)
        {
            if (!tests[i].passed)
            {
                printf("%s\n", tests[i].description);
                printf("   Result: %s\n", tests[i].result ? tests[i].result : "NULL");
                printf("   Expected: %s\n", tests[i].expected ? tests[i].expected : "NULL");
            }
        }
    }
}
