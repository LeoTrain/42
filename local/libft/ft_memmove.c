void    *ft_memmove(void *dest, void *src, unsigned int n)
{
    unsigned int    i;
    unsigned char   *d;
    unsigned char   *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            d[n - i - 1] = s[n - i - 1];
            i++;
        }
    }
    return (dest);
}