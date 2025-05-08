/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:08:26 by leberton          #+#    #+#             */
/*   Updated: 2025/02/08 19:56:31 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = len(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char dest[100] = "Leonardo";
// 	char src[] = "Bertonasco";
// 	printf("%s\n", ft_strcat(dest, src));
// }
