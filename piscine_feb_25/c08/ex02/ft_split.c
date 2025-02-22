#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_in_sep(char *str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (str[i] != sep[i])
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *sep)
{
	int	count;
	int	in_word;
	int	sep_len;

	count = 0;
	in_word = 0;
	sep_len = ft_strlen(sep);
	while (*str)
	{
		if (!is_in_sep(str, sep))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
			str += sep_len - 1;
		}
		str++;
	}
	return (count);
}

char	*ft_strndup(char *start, int len)
{
	int		i;
	char	*word;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**final;
	char	*start;

	i = 0;
	final = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (*str)
	{
		if (!is_in_sep(str, charset))
		{
			start = str;
			len = 0;
			while (*str && !is_in_sep(str, charset))
			{
				len++;
				str++;
			}
			final[i++] = ft_strndup(start, len);
		}
		else
			str += ft_strlen(charset);
	}
	final[i] = NULL;
	return (final);
}


#include <stdio.h>

void    test_one(void)
{
    char *str = "Hi---Im---a---big---guy";
    char *charset = "---";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_two(void)
{
    char *str = "HiabcImabcaabcbigabguy";
    char *charset = "abc";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_three(void)
{
    char *str = "Hello,,world,,this,is,a,test";
    char *charset = ",;";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_four(void)
{
    char *str = "---Hello---42---School---";
    char *charset = "-";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_five(void)
{
    char *str = "a.b.c.d.e.f.g";
    char *charset = ".";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_six(void)
{
    char *str = "####This##is##a#test####";
    char *charset = "#";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

void    test_seven(void)
{
    char *str = "";
    char *charset = "xyz";
    char **split = ft_split(str, charset);
    for (int i = 0; split[i]; i++)
        printf("%s - ", split[i]);
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
    printf("\n");
}

int main(void)
{
    test_one();
    test_two();
    test_three();
    test_four();
    test_five();
    test_six();
    test_seven();
    return 0;
}
