#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

char	rot_1(unsigned int i, char c)
{
	(void)i;
	 return (c + 1);
}

void	rot_2(unsigned int i, char *c)
{
	(void)i;
	char	new_val;
	new_val = *c + 2;
	*c = new_val;
}


int	main(void)
{
	/*printf("SPLIT:\n");*/
	/*char **strs = ft_split(",,,,aaa,,,aaa,,,aaa,,,", ',');*/
	/*for (int i = 0; strs[i] != 0; i++)*/
	/*	printf("	%s\n", strs[i]);*/

	/*printf("ITOA:\n");*/
	/*printf("1. %s\n", ft_itoa(-123));*/
	/*printf("2. %s\n", ft_itoa(2147483647));*/
	/*printf("3. %s\n", ft_itoa(-2147483648));*/
	/*printf("4. %s\n", ft_itoa(0));*/
	/*printf("4. %s\n", ft_itoa(1));*/
	/*printf("4. %s\n", ft_itoa(-1));*/

	/*char str[] = "hello";*/
	/*printf("%s\n", ft_strmapi(str, rot_1));*/
	/*ft_striteri(str, rot_2);*/
	/*printf("%s\n", str);*/

	/*ft_putnbr_fd(0, 1);*/
	/*int fd = open("test.txt", O_RDWR);*/
	/*if (fd == -1)*/
	/*	printf("ERROR");*/
	/*else {*/
		/*ft_putchar_fd('a', fd);*/
	/*	ft_putnbr_fd(0, fd);*/
	/*}*/
	/*close(fd);*/

	char s1[] = "Hello";
	char s2[] = "World";
	t_list *list1 = ft_lstnew(s1);
	t_list *list2 = ft_lstnew(s2);
	ft_lstadd_front(&list1,  list2);
	printf("%d --- %d\n", ft_lstsize(list1), ft_lstsize(list2));
	// t_list *current = list1;
	// while (current)
	// {
	// 	printf("%s\n", (char *)current->content);
	// 	current = current->next;
	// }
	// current = list1;
	//    while (current)
	//    {
	//        t_list *temp = current;
	//        current = current->next;
	//        free(temp);
	//    }
	return (0);
}
