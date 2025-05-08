/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:15:37 by leberton          #+#    #+#             */
/*   Updated: 2025/02/06 16:07:45 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (!((c >= 64 && c <= 90) || \
		(c >= 97 && c <= 122) || \
		(c >= 48 && c <= 57)))
		return (0);
	return (1);
}

int	is_lower(char c)
{
	if (!(c >= 97 && c <= 122))
		return (0);
	return (1);
}

int	is_upper(char c)
{
	if (!(c >= 65 && c <= 90))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start;

	i = 0;
	is_start = 1;
	while (str[i] != 0)
	{
		if (is_start == 1 && is_alpha(str[i]))
		{
			if (is_lower(str[i]) == 1)
				str[i] -= 32;
			is_start = 0;
		}
		else
		{
			if (is_alpha(str[i]) == 0)
				is_start = 1;
			else if (is_upper(str[i] == 1))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
