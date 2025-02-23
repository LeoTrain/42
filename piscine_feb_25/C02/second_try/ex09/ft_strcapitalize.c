/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:15:37 by leberton          #+#    #+#             */
/*   Updated: 2025/02/08 12:22:33 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || \
		(c >= 97 && c <= 122) || \
		(c >= 48 && c <= 57))
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start;

	i = 0;
	is_start = 1;
	while (str[i] != 0)
	{
		if (is_start == 1)
		{
			if (is_lower(str[i]) == 1)
				str[i] -= 32;
			if (is_alpha(str[i]))
				is_start = 0;
		}
		else
		{
			if (is_alpha(str[i]) == 0)
				is_start = 1;
			if (is_upper(str[i]) == 1)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
