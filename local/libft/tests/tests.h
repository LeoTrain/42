#ifndef TESTS_H
#define TESTS_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void    display_int_test(t_test_int *tests, int amount, char *name);
void    display_str_test(t_test_str *tests, int amount, char *name);
void    init_str_test(t_test_str *tests, int position, char *description, char *result, char *expected, int passed);
void    init_int_test(t_test_int *tests, int position, char *description, int result, int expected, int passed);

#endif
