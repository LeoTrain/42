/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:04:50 by leberton          #+#    #+#             */
/*   Updated: 2025/02/18 01:03:50 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) (get_abs(value))

int	get_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

#endif
