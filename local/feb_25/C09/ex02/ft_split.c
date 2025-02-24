#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	while (n-- > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	count;
	int	is_word;
	int	sep_len;

	count = 0;
	is_word = 0;
	sep_len = ft_strlen(sep);
	while (*str)
	{
		if (ft_strncmp(str, sep, sep_len) != 0)
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		else
		{
			is_word = 0;
			str += sep_len - 1;
		}
		str++;
	}
	return (count);
}

char	*ft_strdup_sep(char *str, char *sep)
{
	int		len;
	int		sep_len;
	char	*word;
	int		i;

	len = 0;
	sep_len = ft_strlen(sep);
	while (str[len] && ft_strncmp(str + len, sep, sep_len) != 0)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		words;
	char	**tab;

	i = 0;
	words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (ft_strncmp(str, charset, ft_strlen(charset)) != 0)
		{
			tab[i] = ft_strdup_sep(str, charset);
			i++;
			while (*str && ft_strncmp(str, charset, ft_strlen(charset)) != 0)
				str++;
		}
		else
			str += ft_strlen(charset);
	}
	tab[i] = NULL;
	return (tab);
}

int main(void)
{
	char *str;
	char *sep;
	char **final;
	int i;

	str = "HelloobcWorldobcImobcLeo";
	sep = "obc";
	final = ft_split(str, sep);
	i = 0;
	while (final[i])
	{
		printf("%s - ", final[i]);
		i++;
	}
	printf("\n");
	return (0);
}
