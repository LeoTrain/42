/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:10:02 by leberton          #+#    #+#             */
/*   Updated: 2025/02/08 19:54:42 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == 0)
					return (str + i);
				j++;
			}
		}
		i++;
	}
	return ("\0");
}
//
// #include <stdio.h>
//
// int main(void)
// {
// 	char str[25] = "TutorialsPointThisIsReal";
// 	char substr[10] = "This";
// 	printf("%s\n", ft_strstr(str, substr));
// }
