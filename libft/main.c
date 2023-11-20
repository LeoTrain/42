/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:07:43 by lbertona          #+#    #+#             */
/*   Updated: 2023/11/20 17:19:14 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('7'));
	printf("%d\n", ft_isalnum('G'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('@'));
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