/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:22:32 by lbertona          #+#    #+#             */
/*   Updated: 2023/09/26 21:57:02 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	if (!s)
		return (NULL);
	index = ft_strlen(s);
	while (s[index])
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index--;
	}
	if (s[index] == (char)c)
		return ((char *)(s + index));
	return (NULL);
}

#include <stdio.h>
#include <string.h> 

int main()
{
    const char    s[] = "Leonardo greux gris est grand 123";
    int         c = 'g';
    
    printf("%s\n", s);
    printf("%d\n", c);
    printf("\n");
	printf("%s\n", strrchr(s, c));
    printf("%s\n", ft_strrchr(s, c));
}