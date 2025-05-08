/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:58:13 by leberton          #+#    #+#             */
/*   Updated: 2025/02/09 00:31:08 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
//
// #include <stdio.h>
//
// int	main(void)
// {
// 	char *str1 = "Hello";
// 	char *str2 = "Hello";
// 	char *str3 = "Hellp";
// 	char *str4 = "Hell";
// 	char *str5 = "hello";
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 5) : %d (attendu: 0)\n", str1, str2, ft_strncmp(str1, str2, 5));
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 4) : %d (attendu: 0)\n", str1, str3, ft_strncmp(str1, str3, 4));
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 5) : %d (attendu: -1)\n", str1, str3, ft_strncmp(str1, str3, 5));
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 6) : %d (attendu: 111)\n", str1, str4, ft_strncmp(str1, str4, 6));
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 1) : %d (attendu: -32)\n", str1, str5, ft_strncmp(str1, str5, 1));
// 	printf("Comparaison de \"%s\" et \"%s\" (n = 0) : %d (attendu: -32)\n", str1, str5, ft_strncmp(str1, str5, 0));
// 	return (0);
// }
