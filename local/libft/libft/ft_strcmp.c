int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] < s2[i])
        return (-1);
    return (0);
}