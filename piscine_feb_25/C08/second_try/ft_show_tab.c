/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 23:00:44 by leberton          #+#    #+#             */
/*   Updated: 2025/02/18 18:03:06 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <unistd.h>

void	ft_write_size(int size)
{
	char	c;

	if (size >= 10)
		ft_write_size(size / 10);
	c = (size % 10) + '0';
	write(1, &c, 1);
}

void	ft_write_str(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = 0;
	while (par[i].str)
	{
		ft_write_size(par[i].size);
		write(1, "\n", 1);
		ft_write_str(par[i].str);
		ft_write_str(par[i].copy);
		i++;
	}
}
