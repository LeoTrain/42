/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:34:21 by leberton          #+#    #+#             */
/*   Updated: 2025/04/23 19:48:51 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_count(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	set_is_max(char *str, int is_max)
{
	if (is_max)
		str[1] = '2';
}

static char	*itoa_minus(int n)
{
	int		count;
	char	*str;
	int		is_max;

	n = -n;
	is_max = 0;
	if (n == -2147483648)
	{
		is_max = 1;
		n = 147483648;
	}
	count = get_count(n);
	str = (char *)malloc((count + 1 + is_max) * sizeof(char));
	str[0] = '-';
	set_is_max(str, is_max);
	str[count + is_max + 1] = 0;
	while (count > 0)
	{
		str[count + is_max] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (str);
}

static char	*for_0(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int				count;
	char			*str;

	if (n < 0)
		return (itoa_minus(n));
	else if (n == 0)
		return (for_0());
	count = get_count(n);
	str = (char *)malloc((count) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = 0;
	while (count > 0)
	{
		str[count - 1] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (str);
}
