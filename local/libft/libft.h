#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

char            ft_tolower(char c);
char            ft_toupper(char c);
int             ft_isprint(int c);
int             ft_isascii(int c);
int             ft_isdigit(int c);
int             ft_isalpha(int c);
int             ft_isalnum(int c);
int             ft_atoi(char *str);
int             ft_strcmp(char *s1, char *s2);
int             ft_strncmp(char *s1, char *s2, int n);
int             ft_strlen(char *str);
char            *ft_strdup(char *str);
char            *ft_strcpy(char *dest, char *src);
char            *ft_strncpy(char *dest, char *src, unsigned int n);
char            *ft_strcat(char *s1, char *s2);
char            *ft_strncat(char *s1, char *s2, unsigned int n);
unsigned int    ft_strlcat(char *s1, char *s2, unsigned int size);
char            *ft_strchr(char *str, int c);
char            *ft_strrchr(char *str, int c);
char            *ft_strstr(char *str, char *to_find);
char            *ft_strnstr(char *str, char *to_find, unsigned int n);

#endif