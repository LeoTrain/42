#include "libft.h"

char    *ft_strchr(char *s1, int c)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return (&s1[i]);
        i++;
    }
    if (c == '\0')
        return (&s1[i]);
    return (NULL);
}