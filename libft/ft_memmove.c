/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:06:26 by lbertona          #+#    #+#             */
/*   Updated: 2023/08/28 20:14:51 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(len + 1);
	index = 0;
	while (index < len)
	{
		((unsigned char *)tmp)[index] = ((unsigned char *)src)[index];
		((unsigned char *)dst)[index] = ((unsigned char *)tmp)[index];
		index++;
	}
	return (dst);
}
