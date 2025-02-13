#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	new = malloc(2 * (len(src) + 1));
	i = 0;
	while(str[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
