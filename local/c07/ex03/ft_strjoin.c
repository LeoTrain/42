#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_max_len(int size, char **strs, char *sep)
{
	int	i;
	int	max_len;
	int	sep_len;

	i = 0;
	max_len = 0;
	sep_len = len(sep);
	while (i < size)
	{
		max_len += len(strs[i]);
		if (i < size - 1)
			max_len += sep_len;
		i++;
	}
	return (max_len);
}

int	ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	dest_len;
	int	src_len;

	i = 0;
	dest_len = len(dest);
	src_len = len(src);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		max_len;
	char	*final_str;

	if (size == 0)
		return (malloc(1));
	i = 0;
	max_len = get_max_len(size, strs, sep);
	final_str = malloc(sizeof(char) * (max_len + 1));
	if (!final_str)
		return (NULL);
	final_str[0] = '\0';
	while (i < size)
	{
		ft_strlcat(final_str, strs[i], max_len + 1);
		if (i < size - 1)
			ft_strlcat(final_str, sep, max_len + 1);
		i++;
	}
	return (final_str);
}

int main(void)
{
	char *strs[] = {"Hello", "this", "is", "Leo"};
	char sep[] = " - ";
	char *final_str = ft_strjoin(4, strs, sep);
	if (final_str)
	{
		printf("%s\n", final_str);
		free(final_str);
	}
	return (0);
}
