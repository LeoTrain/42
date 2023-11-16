/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:21:02 by lbertona          #+#    #+#             */
/*   Updated: 2023/09/26 21:57:42 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	if (!s)
		return (NULL);
	index = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index++;
	}
	if (s[index] == (char)c)
		return ((char *)(s + index));
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h> 

int main()
{
    const char    s[] = "Leonardo est grand 123";
    int         c = 'g';
    
    printf("%s\n", s);
    printf("%d\n", c);
    printf("\n");
	printf("%s\n", strchr(s, c));
    printf("%s\n", ft_strchr(s, c));
}
*/
