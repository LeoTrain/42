#include "libft.h"

void    *ft_memccpy(void *dest, void *src, int c, unsigned int n)
{
    unsigned int    i;
    unsigned char   *d;
    unsigned char   *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}