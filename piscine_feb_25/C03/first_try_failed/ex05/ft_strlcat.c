/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:04:14 by leberton          #+#    #+#             */
/*   Updated: 2025/02/08 20:49:28 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = len(dest);
	while (src[i] && (i + dest_len) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + i);
}
//
// #include <stdio.h>
//
// int main(void)
// {
// 	char dest[10] = "abcdefg";
// 	char src[25] = "Leonardo";
// 	printf("%d\n", ft_strlcat(dest, src, sizeof(dest)));
// 	printf("%s\n", dest);
// }
