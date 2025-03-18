#include "libft.h"

char    *ft_strrchr(char *s1, int c)
{
    int i;

    i = 0;
    while (s1[i])
        i++;
    if (c == '\0')
        return (&s1[i]);
    while (i >= 0)
    {
        if (s1[i] == c)
            return (&s1[i]);
        i--;
    }
    return (NULL);
}