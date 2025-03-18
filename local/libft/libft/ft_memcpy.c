#include "libft.h"

void    *ft_memcpy(void *dest, void *src, unsigned int n)
{
    unsigned int    i;
    char            *d;
    char            *s;

    if (!dest || !src)
        return (NULL);
    i = 0;
    d = (char *)dest;
    s = (char *)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}