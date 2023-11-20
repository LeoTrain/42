/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:22:32 by lbertona          #+#    #+#             */
/*   Updated: 2023/11/20 14:54:18 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	charptr;
	char	*chars;

	chars = (char *)s;
	charptr = (char)c;
	if (!s)
		return (NULL);
	index = ft_strlen(s);
	while (index > 0)
	{
		if (chars[index] == charptr)
			return (&chars[index]);
		index--;
	}
	if (chars[index] == charptr)
		return (&chars[index]);
	return (NULL);
}
