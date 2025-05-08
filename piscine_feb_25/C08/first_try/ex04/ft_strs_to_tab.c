/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:30:22 by leberton          #+#    #+#             */
/*   Updated: 2025/02/18 01:10:42 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	copy_string_to_stock(char *str, struct s_stock_str *stock)
{
	int	j;

	j = 0;
	while (str[j])
	{
		stock->str[j] = str[j];
		stock->copy[j] = str[j];
		j++;
	}
	stock->str[j] = '\0';
	stock->copy[j] = '\0';
}

void	last_stock(struct s_stock_str *stock)
{
	stock->size = 0;
	stock->str = malloc(sizeof(char));
	stock->str[0] = 0;
	stock->copy = malloc(sizeof(char));
	stock->copy[0] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			size;
	t_stock_str	*stocks;

	i = 0;
	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		stocks[i].size = size;
		stocks[i].str = malloc(sizeof(char) * (size + 1));
		stocks[i].copy = malloc(sizeof(char) * (size + 1));
		copy_string_to_stock(av[i], &stocks[i]);
		i++;
	}
	last_stock(&stocks[i]);
	return (stocks);
}
