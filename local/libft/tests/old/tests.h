#ifndef TESTS_H
#define TESTS_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum e_test_type
{
	TEST_INT,
	TEST_STR,
	TEST_BOOL,
	TEST_VOID,
	TEST_INT_ARRAY,
} t_test_type;

typedef struct s_test
{
	char *description;
	void *result;
	void *expected;
	void *passed;
} t_test;

typedef struct s_test_int
{
    char *description;
    int result;
    int expected;
    int passed;
} t_test_int;

typedef struct s_test_str
{
    char *description;
    char *result;
    char *expected;
    int passed;
} t_test_str;

typedef struct s_test_bool
{
	char *description;
	int result;
	int	expected;
	int	passed;
} t_test_bool;

typedef struct s_test_int_array
{
	char *description;
	int	*result;
	int	*expected;
	int	passed;
	int size;
} t_test_int_array;

void    test_tolower(void);
void    test_toupper(void);
void    test_isprint(void);
void    test_isascii(void);
void    test_isalnum(void);
void    test_atoi(void);
void    test_strcmp(void);
void    test_strncmp(void);
void    test_strlen(void);
void    test_strdup(void);
void    test_strcpy(void);
void    test_strncpy(void);
void    test_strcat(void);
void    test_strncat(void);
void    test_strlcat(void);
void    test_strchr(void);
void    test_strrchr(void);
void    test_strstr(void);
void    test_strnstr(void);
void    test_memset(void);
void    test_bzero(void);
void    test_memcpy(void);
void	test_memccpy(void);
void	test_memmove(void);

void    display_int_test(t_test_int *tests, int amount, char *name);
void    display_str_test(t_test_str *tests, int amount, char *name);
void	display_bool_test(t_test_bool *tests, int amount, char *name);
void    init_str_test(t_test_str *tests, int position, char *description, char *result, char *expected, int passed);
void    init_int_test(t_test_int *tests, int position, char *description, int result, int expected, int passed);
void	init_int_array_test(t_test_int_array *tests, int position, char *description, int *result, int *expected, int size, int passed);
void    init_bool_test(t_test_bool *tests, int position, char *description, int result, int expected);

void	init_test(void *tests, int position, char *description, void *result, void *expected, int passed, int size, t_test_type type);
void	display_test(void *tests, int amount, char *name, t_test_type type);

#endif
