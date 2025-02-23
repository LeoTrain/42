/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:15:52 by leberton          #+#    #+#             */
/*   Updated: 2025/02/18 10:12:32 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;
	int	sep_len;

	i = 0;
	total_length = 0;
	sep_len = len(sep);
	while (i < size)
	{
		total_length += len(strs[i]);
		if (i < size - 1)
			total_length += sep_len;
		i++;
	}
	return (total_length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (get_total_length(size, strs, sep) + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
