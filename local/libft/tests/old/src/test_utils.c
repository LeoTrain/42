#include "../tests.h"

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

void init_bool_test(t_test_bool *tests, int position, char *description, int result, int expected)
{
	int	passed;

	tests[position].description = strdup(description);
	tests[position].result = result;
	tests[position].expected = expected;
	if ((result && expected) || (!result && !expected))
		passed = 1;
	else
		passed = 0;
	tests[position].passed = passed;
}

void	init_int_array_test(t_test_int_array *tests, int position, char *description, int *result, int *expected, int size, int passed)
{
	tests[position].description = strdup(description);
	tests[position].result = result;
	tests[position].expected = expected;
	tests[position].passed = passed;
	tests[position].size = size;
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


void display_bool_test(t_test_bool *tests, int amount, char *name)
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

void	display_int_array_test(t_test_int_array *tests, int amount, char *name)
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
                printf("   Result: ");
                for (int j = 0; j < tests[i].size; j++)
                    printf("%d ", tests[i].result[j]);
                printf("\n");

                printf("   Expected: ");
                for (int j = 0; j < tests[i].size; j++)
                    printf("%d ", tests[i].expected[j]);
                printf("\n");            }
        }
    }
}

void	init_test(void *tests, int position, char *description, void *result, void *expected, int passed, int size, t_test_type type)
{
	if (type == TEST_INT)
		init_int_test((t_test_int *)tests, position, description, (int)(intptr_t)result, (int)(intptr_t)expected, passed);
	else if (type == TEST_STR)
		init_str_test((t_test_str *)tests, position, description, (char *)result, (char *)expected, passed);
	else if (type == TEST_BOOL)
		init_bool_test((t_test_bool *)tests, position, description, (int)(intptr_t)result, (int)(intptr_t)expected);
	else if (type == TEST_INT_ARRAY)
		init_int_array_test((t_test_int_array *)tests, position, description, (int *)result, (int *)expected, size, passed);
}

void	display_test(void	*tests, int	amount, char *name, t_test_type type)
{
	if (type == TEST_INT)
		display_int_test((t_test_int *)tests, amount, name);
	else if (type == TEST_STR)
		display_str_test((t_test_str *)tests, amount, name);
	else if (type == TEST_BOOL)
		display_bool_test((t_test_bool *)tests, amount, name);
	else if (type == TEST_INT_ARRAY)
		display_int_array_test((t_test_int_array *)tests, amount, name);

}
