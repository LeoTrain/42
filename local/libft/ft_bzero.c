void    ft_bzero(void *s, int n)
{
    char *tmp;

    tmp = s;
    while (n--)
        *tmp++ = 0;
}