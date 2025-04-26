/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:12:02 by leberton          #+#    #+#             */
/*   Updated: 2025/04/26 17:16:02 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;
	t_list	*temp;

	swap = *lst;
	while (swap)
	{
		temp = swap->next;
		del(swap->content);
		free(swap);
		swap = temp;
	}
	*lst = NULL;
}
