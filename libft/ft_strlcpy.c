/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:43:00 by lbertona          #+#    #+#             */
/*   Updated: 2023/09/06 06:05:10 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	r_index;
	size_t	index;

	index = 0;
	r_index = 0;
	while (src[r_index])
		r_index++;
	if (dstsize == 0)
		return (r_index);
	while (src[index] && index < (dstsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (r_index);
}
