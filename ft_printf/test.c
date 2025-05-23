#include "code/ft_printf.h"
#include <limits.h>

void	print(int expected, int result)
{
	if (result == expected)
		printf("✅ The result matches the expected.\n");
	else
		printf("❌ The result doesn't match the expected.\nResult:\t%d\nExpected\t%d\n", result, expected);
}

void	test_c(void)
{
	int expected = printf("%c\n");
	int result = ft_printf("%c\n");
	print(expected, result);
	expected = printf("%c\n", 48);
	result = ft_printf("%c\n", 48);
	print(expected, result);
	expected = printf("%c\n", NULL);
	result = ft_printf("%c\n", NULL);
	print(expected, result);
	expected = printf("%c\n", 130);
	result = ft_printf("%c\n", 130);
	print(expected, result);
	expected = printf("%c\n", 'a');
	result = ft_printf("%c\n", 'a');
	print(expected, result);
	expected = printf("%c\n", "abc");
	result = ft_printf("%c\n", "abc");
	print(expected, result);
}

void	test_str(void)
{
	int expected = printf("%s\n");
	int result = ft_printf("%s\n");
	printf("%d - %d\n", expected, result);
	expected = printf("%s\n", "Hello World");
	result = ft_printf("%s\n", "Hello World");
	print(expected, result);
	expected = printf("%s\n", "Hello\0World");
	result = ft_printf("%s\n", "Hello\0World");
	print(expected, result);
	expected = printf("%s\n", "");
	result = ft_printf("%s\n", "");
	print(expected, result);
	expected = printf("%s\n", "abc");
	result = ft_printf("%s\n", "abc");
	print(expected, result);
	expected = printf("%s\n", "\0abc");
	result = ft_printf("%s\n", "\0abc");
	print(expected, result);
}

int test_ptr(void)
{
	int expected = printf("%p\n");
	int result = ft_printf("%p\n");
	expected = printf("%p\n");
	result = ft_printf("%p\n");
	expected = printf("%p\n");
	result = ft_printf("%p\n");
	expected = printf("%p\n");
	result = ft_printf("%p\n");
	expected = printf("%p\n");
	result = ft_printf("%p\n");
	print(expected, result);
	expected = printf("%p\n", "");
	result = ft_printf("%p\n", "");
	print(expected, result);
	expected = printf("%p\n", NULL);
	result = ft_printf("%p\n", NULL);
	print(expected, result);
	int *a = (int *)malloc(5 * sizeof(int));
	expected = printf("%p\n", a);
	result = ft_printf("%p\n", a);
	print(expected, result);
	a[3] = 54;
	expected = printf("%p\n", &a[3]);
	result = ft_printf("%p\n", &a[3]);
	print(expected, result);
	free(a);
	expected = printf("%p\n", 10);
	result = ft_printf("%p\n", 10);
	print(expected, result);
}

// void	test_decimal(void)
// {
// 	int expected = printf("%d\n");
// 	int result = ft_printf("%d\n");
// 	expected = printf("%d\n");
// 	result = ft_printf("%d\n");
// 	expected = printf("%d\n");
// 	result = ft_printf("%d\n");
// 	print(expected, result);
// 	expected = printf("%d\n", 10);
// 	result = ft_printf("%d\n", 10);
// 	print(expected, result);
// 	expected = printf("%d\n", INT_MIN);
// 	result = ft_printf("%d\n", INT_MIN);
// 	print(expected, result);
// 	expected = printf("%d\n", INT_MAX);
// 	result = ft_printf("%d\n", INT_MAX);
// 	print(expected, result);
// 	expected = printf("%d\n", INT_MIN - 1);
// 	result = ft_printf("%d\n", INT_MIN - 1);
// 	print(expected, result);
// 	expected = printf("%d\n", INT_MAX + 1);
// 	result = ft_printf("%d\n", INT_MAX + 1);
// 	print(expected, result);
// 	expected = printf("%d\n", "");
// 	result = ft_printf("%d\n", "");
// 	print(expected, result);
// }
//
// void	test_unsigned_decimal(void)
// {
// 	int expected = printf("%u\n");
// 	int result = ft_printf("%u\n");
// 	expected = printf("%u\n");
// 	result = ft_printf("%u\n");
// 	expected = printf("%u\n");
// 	result = ft_printf("%u\n");
// 	print(expected, result);
// 	expected = printf("%u\n", 10);
// 	result = ft_printf("%u\n", 10);
// 	print(expected, result);
// 	expected = printf("%u\n", INT_MIN);
// 	result = ft_printf("%u\n", INT_MIN);
// 	print(expected, result);
// 	expected = printf("%u\n", INT_MAX);
// 	result = ft_printf("%u\n", INT_MAX);
// 	print(expected, result);
// 	expected = printf("%u\n", INT_MIN - 1);
// 	result = ft_printf("%u\n", INT_MIN - 1);
// 	print(expected, result);
// 	expected = printf("%u\n", INT_MAX + 1);
// 	result = ft_printf("%u\n", INT_MAX + 1);
// 	print(expected, result);
// 	expected = printf("%u\n", "");
// 	result = ft_printf("%u\n", "");
// 	print(expected, result);
// 	expected = printf("%u\n", 'a');
// 	result = ft_printf("%u\n", 'a');
// 	print(expected, result);
// }

int main(void)
{
	// test_c();
	// test_str();
	// test_ptr();
	// test_decimal();
	// test_unsigned_decimal();
	// ft_printf(" %c %c %c ", '0', 0, '1');
	printf("%d\n", ft_printf(" %u ", 1));
	// printf("%d\n", printf(" %p %p ", 0, 0));
	return (0);
	// int	n;
	// int expected = printf("Expected: %p - ", &n);
	// printf("%d\n", expected);
	// int result = ft_printf("Result: %p - ", &n);
	// ft_printf("%d\n", result);
	//
	// int expected1 = printf("Expected: %d - ", -55);
	// printf("%d\n", expected1);
	// int result1 = ft_printf("Result: %d - ", -55);
	// ft_printf("%d\n", result1);
	// int expected2 = printf("Expected: %d - ", INT_MIN);
	// printf("%d\n", expected2);
	// int result2 = ft_printf("Result: %d - ", INT_MIN);
	// ft_printf("%d\n", result2);
	//
	// int expected3 = printf("Expected: %d - ", INT_MAX);
	// printf("%d\n", expected3);
	// int result3 = ft_printf("Result: %d - ", INT_MAX);
	// ft_printf("%d\n", result3);
	// return (0);
}
