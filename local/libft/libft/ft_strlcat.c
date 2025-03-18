unsigned int    ft_strlcat(char *s1, char *s2, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    j = 0;
    k = 0;
    while (s1[i])
        i++;
    while (s2[j])
        j++;
    if (size <= i)
        return (size + j);
    while (s2[k] && i + k < size - 1)
    {
        s1[i + k] = s2[k];
        k++;
    }
    s1[i + k] = '\0';
    return (i + j);
}