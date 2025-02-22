#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"


int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*current_list;
	int		full_list_data_size;
	char	*full_str;

	i = 0;
	current_list = begin_list;
	full_list_data_size = 0;
	while (current_list != NULL)
	{
		current_list = current_list->next;
		while(current_list->data)
			full_list_data_size++;
		i++;
		full_list_data_size++;
	}
	i = 0;
	full_str = malloc(sizeof(char) * full_list_data_size);
	current_list = begin_list;
	while (current_list != NULL)
	{
		while(current_list->data);
		{
			full_str[i] = current_list->data[i];
			i++;
		}
		full_str[i] = ' ';
	}
	full_str[i] = 0;
	printf("%s\n", full_str);
	return (i);
}

int main(void)
{
	t_list *new_list = malloc(sizeof(t_list));
	t_list *newer_list = malloc(sizeof(t_list));
	t_list *newnewer_list = malloc(sizeof(t_list));
	if (!new_list || !newer_list || !newnewer_list)
	{
		free(new_list);
		free(newer_list);
		free(newnewer_list);
		return -1;
	}
	new_list->data = "hello";
	new_list->next = NULL;
	newer_list->data = "world";
	newer_list->next = new_list;
	newnewer_list->data = "I am";
	newnewer_list->next = newer_list;
	printf("Taille de la liste -> %d\n", ft_list_size(newnewer_list));
	free(new_list);
	free(newer_list);
	free(newnewer_list);
	return (0);
}
