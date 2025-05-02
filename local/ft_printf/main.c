#include "code/ft_libft/libft.h"
#include "code/libftprintf.h"
#include <stdio.h>
#include <criterion/criterion.h>

TestSuite(test_c);

Test(test_c, print_a)
{
	cr_assert_eq(ft_printf("%c", 'a'), printf("%c", 'a'));
}

Test(test_c, print_Z)
{
	cr_assert_eq(ft_printf("%c", 'Z'), printf("%c", 'Z'));
}

Test(test_c, print_0_char)
{
	cr_assert_eq(ft_printf("%c", '0'), printf("%c", '0'));
}

TestSuite(test_str);

Test(test_str, print_Hello)
{
	cr_assert_eq(ft_printf("%s", "Hello"), printf("%s", "Hello"));
}

Test(test_str, print_Hello_World)
{
	cr_assert_eq(ft_printf("%s", "Hello World"), printf("%s", "Hello World"));
}

Test(test_str, print_Hello_null_World)
{
	cr_assert_eq(ft_printf("%s", "Hello\0World"), printf("%s", "Hello\0World"));
}

TestSuite(test_ptr);

Test(test_ptr, ptr_x)
{
	char	*x;
	cr_assert_eq(ft_printf("%p", x), printf("%p", x));
}

Test(test_ptr, ptr_NULL)
{
	char	*x;
	cr_assert_eq(ft_printf("%p", NULL), printf("%p", NULL));
}


/*static void show_result(char *name, unsigned int expected, unsigned int result)*/
/*{*/
/*	printf("Testing '%s':\n", name);*/
/*	printf("\t-Expected:\t%u\n", expected);*/
/*	printf("\t-Result:\t%u\n", result);*/
/*}*/
/**/
/*char	*get_not_printable(char c)*/
/*{*/
/*	if (c == '\t')*/
/*		return (ft_strdup("\\t"));*/
/*	else if (c == '\0')*/
/*		return (ft_strdup("\\0 or 0"));*/
/*	return (NULL);*/
/*}*/
/**/
/*static void	print_char_test(char c)*/
/*{*/
/*	char	*name;*/
/*	size_t	size;*/
/*	int		c_is_printable;*/
/*	char	*c_printable;*/
/**/
/**/
/*	c_is_printable = 1;*/
/*	if (!ft_isprint(c))*/
/*	{*/
/*		c_is_printable = 0;*/
/*		c_printable = get_not_printable(c);*/
/*	}*/
/*	else {*/
/*		c_printable = (char *)malloc(2 * sizeof(char));*/
/*		c_printable[0] = c;*/
/*		c_printable[1] = '\0';*/
/*	}*/
/*	size = ft_strlen("%c is printing ") + 2 + (!c_is_printable);*/
/*	name = (char *)malloc(size * sizeof(char));*/
/*	ft_bzero(name, size);*/
/*	ft_strlcat(name, "%c is printing ", size);*/
/*	ft_strlcat(name, c_printable, size);*/
/*	show_result(name, ft_printf("%c", c), printf("%c", c));*/
/*	free(name);*/
/*	free(c_printable);*/
/*}*/
/**/
/*static void	print_str_test(int i, const char *str)*/
/*{*/
/*	ft_printf("%s", str);*/
/*	printf("\t\t-ft_printf\t%d\n", i + 1);*/
/*	printf("%s\t\t-printf\t\t%d\n", str, i + 1);*/
/*}*/
/**/
/*void	test_char(void)*/
/*{*/
/*	printf("\n\n\n\n");*/
/*	print_char_test('a');*/
/*	print_char_test('Z');*/
/*	print_char_test('0');*/
/*	print_char_test('9');*/
/*	print_char_test(0);*/
/*	print_char_test('\0');*/
/*	print_char_test('\t');*/
/*}*/
/**/
/*void	test_string(void)*/
/*{*/
/*	printf("\n\n\n\n");*/
/*	printf("TEST '%%s':\n");*/
/*	print_str_test(0, "HelloWorld");*/
/*	print_str_test(1, "Hello\0World");*/
/*	print_str_test(2, "\tHello World");*/
/*	print_str_test(3, "");*/
/*	print_str_test(4, NULL);*/
/*}*/
/**/
/*int main(void)*/
/*{*/
/*	test_char();*/
	/*test_string();*/
/*	int i = 1;*/
	/*ft_printf("%s%c%s%d%u!\n", "Hello", ' ', "World", 57, 2147483647);*/
	/*printf("%s%%%c%s%d%u!\n", "Hello", ' ', "World", 57, 2147483647);*/
	/*ft_printf("FT_Adress\t: %p\n", &i);*/
	/*printf("Adress\t\t: %p\n", &i);*/
	/*ft_printf("%%Decimal: %d\n", 214748364);*/
	/*printf("%%Decimal: %d\n", 214748364);*/
/*	return (0);*/
/*}*/
