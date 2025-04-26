#ifndef TEASTES_H
#define TEASTES_H

#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

#define GREEN "\x1b[32;1m"
#define RED "\x1b[31;1m"
#define RESET "\x1b[0m"


void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_strlen(void);
void	test_memset(void);
void	test_bzero(void);
void	test_memcpy(void);
void	test_memmove(void);
void	test_strlcpy(void);
void	test_strlcat(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_strchr(void);
void	test_strrchr(void);
void	test_strncmp(void);
void	test_memchr(void);
void	test_memcmp(void);
void	test_strnstr(void);
void	test_atoi(void);

void	print_correct(size_t i);
void	print_incorrect(size_t i);


#endif // !TEASTES_H
