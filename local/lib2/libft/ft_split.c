/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:17:05 by leberton          #+#    #+#             */
/*   Updated: 2025/04/25 18:37:07 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != 0)
		{
			words++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	return (words);
}

char	*copy_str(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc((end - start + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static void	process_str(const char *s, const char c, char **final)
{
	unsigned int	start_of_word;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start_of_word = i;
		while (s[i] != c && s[i] != 0)
			i++;
		if (i > start_of_word)
		{
			final[j] = copy_str(s, start_of_word, i);
			j++;
		}
	}
	final[j] = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**final;
	size_t	words_amount;

	words_amount = count_words(s, c);
	final = (char **)malloc((words_amount + 1) * sizeof(char *));
	if (!final)
		return (NULL);
	process_str(s, c, final);
	return (final);
}
