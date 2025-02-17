#include <stdlib.h>

int	ft_abs(int	nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_is_valid_base(char *base)
{
    int i, j;
    if (!base || ft_strlen(base) < 2)
        return (0);
    for (i = 0; base[i]; i++)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
            return (0);
        for (j = i + 1; base[j]; j++)
            if (base[i] == base[j])
                return (0);
    }
    return (1);
}

int ft_get_index(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *nbr, char *base)
{
    int	result;
	int	sign;
	int	index;

	result = 0,
	sign = 1;
    while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
        nbr++;
    while (*nbr == '+' || *nbr == '-')
    {
        if (*nbr == '-')
            sign = -sign;
        nbr++;
    }
    while ((index = ft_get_index(*nbr, base)) != -1)
    {
        result = result * ft_strlen(base) + index;
        nbr++;
    }
    return (result * sign);
}

char *ft_itoa_base(int nbr, char *base)
{
    int		len;
	int		tmp;
	char	*res;

	len = (nbr <= 0);
	tmp = nbr;
    while (tmp)
    {
        tmp /= ft_strlen(base);
        len++;
    }
    res = (char *)malloc(len + 1);
    if (!res)
        return (NULL);
    res[len] = '\0';
    if (nbr < 0)
        res[0] = '-';
    while (len-- > (nbr < 0))
    {
        res[len] = base[ft_abs(nbr % ft_strlen(base))];
        nbr /= ft_strlen(base);
    }
    return (res);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
        return (NULL);
    return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}

#include <stdio.h>

int	main(void)
{
	char *nbr = "   ---++-+-8F";
	char *base_from = "0123456789ABCDEF";
	char *base_to = "0123456789";
	char *answer = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", answer);
}
