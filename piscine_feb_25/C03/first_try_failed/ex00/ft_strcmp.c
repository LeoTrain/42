/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:46:19 by leberton          #+#    #+#             */
/*   Updated: 2025/02/09 00:21:53 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
// 	printf("Comparaison de \"%s\" et \"%s\": %d (attendu: 0)\n", str1, str2, ft_strcmp(str1, str2));
// 	printf("Comparaison de \"%s\" et \"%s\": %d (attendu: -1)\n", str1, str3, ft_strcmp(str1, str3));
// 	printf("Comparaison de \"%s\" et \"%s\": %d (attendu: 111)\n", str1, str4, ft_strcmp(str1, str4));
// 	printf("Comparaison de \"%s\" et \"%s\": %d (attendu: -32)\n", str1, str5, ft_strcmp(str1, str5));
// 	return (0);
// }
