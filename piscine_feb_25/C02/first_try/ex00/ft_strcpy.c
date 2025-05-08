/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton < leberton@student.42vienna.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 04:50:30 by leberton          #+#    #+#             */
/*   Updated: 2025/02/06 09:23:35 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = len(src);
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[src_len] = '\0';
}
