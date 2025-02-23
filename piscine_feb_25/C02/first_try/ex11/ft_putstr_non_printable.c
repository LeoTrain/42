/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:34:44 by leberton          #+#    #+#             */
/*   Updated: 2025/02/07 10:43:37 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	decimal_to_hexa(int i, int recall)
{
	char	map[];

	map = "0123456789abcdef";
	if (i > 16)
	{
		decimal_to_hexa(i / 16, 1);
		decimal_to_hexa(i % 16, 1);
	}
	else
	{
		if (recall == 0)
			write(1, "0", 2);
		write(1, &map[i], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 1 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			decimal_to_hexa(str[i], 0);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
