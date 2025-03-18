#include "libft.h"

void    *ft_memchr(void *s, int c, unsigned int n)
{
    unsigned int    i;
    unsigned char   *str;

    if (!s)
        return (NULL);
    i = 0;
    str = (unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return (str + i);
        i++;
    }
    return (NULL);
}