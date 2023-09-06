/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:44:57 by lbertona          #+#    #+#             */
/*   Updated: 2023/08/27 20:59:25 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*str;

	index = 0;
	if (n == 0)
		return ;
	str = (unsigned char *)s;
	while (index < n)
	{
		str[index] = 0;
		index++;
	}
}
