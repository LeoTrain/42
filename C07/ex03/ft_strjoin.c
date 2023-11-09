/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertona <lbertona@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:23:36 by lbertona          #+#    #+#             */
/*   Updated: 2023/11/09 11:55:13 by lbertona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;
	
	index = 0;
	while(*str)
	{
		index++;
		str++;
	}
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		index;
	int		index_strs;
	int		result_size;
	int		temp;
	int		final;
	
	index = 0;
	result_size = 0;
	while(index < size)
	{
		if (strs[index])
		{
			result_size += ft_strlen(strs[index]);
			if (index < size - 1)
				result_size += ft_strlen(sep);
		}
		index++;
	}
	result = malloc(result_size + 1);
	
	index = 0;
	temp = 0;
	index_strs = 0;
	final = 0;
	while (result[final])
	{
		index_strs = 0;
		while (strs[temp][index_strs])
		{
			result[index_strs + final] = strs[temp][index_strs];
			index_strs++;
		}
		index = 0;
		while (sep[index])
		{
			result[index + index_strs + final] = sep[index];
			index++;
		}
		final = index_strs + index;
		temp++;
	}
	result[final] = '\0';
	return (result);
}


#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main()
{
	char	sep[] = " ";
	char	*string[4];
	int 	size = 4;
	
	string[0] = "Hello";
	string[1] = "World";
	string[2] = "I'm";
	string[3] = "Leo";
	
	ft_putstr("all strings at the start = ");
	int index = 0;
	while (index < 4)
	{
		ft_putstr(string[index]);
		index++;
	}
	write(1, "\n", 1);

	ft_putstr("all strings at the end = ");
	ft_putstr(ft_strjoin(size, string, sep));
	write(1, "\n", 1);
}