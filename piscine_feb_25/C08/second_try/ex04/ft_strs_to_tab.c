/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:30:22 by leberton          #+#    #+#             */
/*   Updated: 2025/02/18 18:00:25 by leberton         ###   ########.fr       */
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

void	last_stock(struct s_stock_str *stock)
{
	stock->size = 0;
	stock->str = 0;
	stock->copy = 0;
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = NULL;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			size;
	t_stock_str	*stocks;

	i = 0;
	stocks = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stocks)
		return (NULL);
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		stocks[i].size = size;
		stocks[i].str = av[i];
		stocks[i].copy = ft_strcpy(av[i], size);
		i++;
	}
	last_stock(&stocks[i]);
	return (stocks);
}
