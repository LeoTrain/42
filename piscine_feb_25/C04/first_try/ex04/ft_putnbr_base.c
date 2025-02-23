/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 02:29:27 by leberton          #+#    #+#             */
/*   Updated: 2025/02/09 06:47:32 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && j != i)
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	current;

	if (!(check_base(base)))
		return ;
	base_len = len(base);
	if (nbr > 0)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	current = base[(nbr % base_len)];
	write(1, &current, 1);
}
//
// int	main(void)
// {
// 	char base[] = "0123456789ABCDEF";
// 	ft_putnbr_base(11, base);
// }
