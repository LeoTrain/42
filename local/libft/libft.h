#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

char    ft_tolower(char c);
char    ft_toupper(char c);
int     ft_isprint(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_atoi(char *str);
int     ft_strcmp(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, int n);
int     ft_strlen(char *str);

#endif