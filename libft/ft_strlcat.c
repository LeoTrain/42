/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:11:12 by lbertona          #+#    #+#             */
/*   Updated: 2023/09/13 17:00:25 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlent(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dstlength;

	dstlength = ft_strlent(dst);
	index = 0;
	if (dstsize == 0)
		return (ft_strlent(src));
	if (dstsize < dstlength)
		return (dstsize + ft_strlent(src));
	while (src[index] != '\0' && dstlength + 1 < dstsize)
	{
		dst[dstlength] = src[index];
		index++;
		dstlength++;
	}
	dst[dstlength] = '\0';
	return (dstlength + ft_strlent(src + index));
}

/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <stdio.h>

int	main()
{
	char dest[30] = "Hello, ";
	const char *source = "world!";
	size_t result;

	result = ft_strlcat(dest, source, sizeof(dest));

	ft_putstr("After strlcat, dest contains: ");
	ft_putstr(dest);
	write(1, "\n", 1);

	printf("Return value: %zu\n", result);
	return (0);
}
*/