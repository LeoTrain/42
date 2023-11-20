/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:07:43 by lbertona          #+#    #+#             */
/*   Updated: 2023/11/20 22:40:11 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char b[10];
	ft_memset(b, 'c', 5);
	ft_memset(b+5, 'd', 5);
	printf("%s\n", b);
	return (0);
}

	//ISALPHA
	//printf("%d\n", ft_isalpha('a'));
	//printf("%d\n", ft_isalpha('7'));
	//printf("%d\n", ft_isalpha('Y'));
	//ISDIGIT
	//printf("%d\n", ft_isdigit('a'));
	//printf("%d\n", ft_isdigit('7'));
	//printf("%d\n", ft_isdigit('Y'));
	//ISALNUM
	//printf("%d\n", ft_isalnum('a'));
	//printf("%d\n", ft_isalnum('7'));
	//printf("%d\n", ft_isalnum('G'));
	//printf("%d\n", ft_isalnum('\n'));
	//printf("%d\n", ft_isalnum('@'));
	//MEMSET