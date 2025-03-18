void    *ft_memset(void *b, int c, int len)
{
    unsigned char   *ptr;
    int          i;

    ptr = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}