/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:13:18 by lbertona          #+#    #+#             */
/*   Updated: 2023/08/27 20:43:51 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*ptr;

	index = 0;
	ptr = (unsigned char *)b;
	while (index < len)
	{
		ptr[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
