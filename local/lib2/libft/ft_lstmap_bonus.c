/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leberton <leberton@42vienna.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:34:45 by leberton          #+#    #+#             */
/*   Updated: 2025/04/26 17:44:29 by leberton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*current;
	void	*new_content;

	new_list = NULL;
	current = lst;
	while (current)
	{
		new_content = f(current->content);
		new_element = ft_lstnew(new_content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			free(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		current = current->next;
	}
	return (new_list);
}
