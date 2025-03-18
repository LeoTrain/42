/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 06:07:22 by leberton          #+#    #+#             */
/*   Updated: 2025/02/24 06:27:37 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (ft_strncmp(str, sep, ft_strlen(sep)) != 0)
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
			str += ft_strlen(sep) - 1;
		}
		str++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *sep)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && ft_strncmp(str + len, sep, ft_strlen(sep)) != 0)
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
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (ft_strncmp(str, charset, ft_strlen(charset)) != 0)
		{
			tab[i] = ft_strdup(str, charset);
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
