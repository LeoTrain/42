/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:09:43 by leberton          #+#    #+#             */
/*   Updated: 2025/04/23 10:03:14 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	total_size;

	if (count != 0 && size != 0)
	{
		total_size = count * size;
		if (count != total_size / size)
			return (NULL);
	}
	else
		total_size = 0;
	array = malloc(total_size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	ft_bzero(array, total_size);
	return (array);
}
