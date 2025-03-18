char    *ft_strnstr(char *str, char *to_find, unsigned int n)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] && i < n)
    {
        j = 0;
        while (str[i + j] == to_find[j] && i + j < n)
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}