/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:49:04 by leberton          #+#    #+#             */
/*   Updated: 2025/02/09 11:31:04 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putline01(char corner_left, char corner_right, \
				char in_between, int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
			ft_putchar(corner_left);
		else if (i == width - 1)
			ft_putchar(corner_right);
		else
			ft_putchar(in_between);
		i++;
	}
}

void	rush01(int w, int h)
{
	int	current_height;

	current_height = 0;
	if (w <= 0 || h < 0)
		return ;
	while (current_height < h)
	{
		if (current_height == 0)
			putline01('/', '\\', '*', w);
		else if (current_height == h - 1)
			putline01('\\', '/', '*', w);
		else
			putline01('*', '*', ' ', w);
		current_height++;
		ft_putchar('\n');
	}
}
