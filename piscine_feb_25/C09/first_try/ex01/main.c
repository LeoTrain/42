void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#include <stdio.h>

int	main(void)
{
	ft_putchar('a');
	ft_putchar('\n');

	int	a, b;

	a = 10;
	b = 42;
	ft_swap(&a, &b);
	printf("a -> %d - b -> %d\n", a, b);

	ft_putstr("Hello World\n");

	printf("len -> %d\n", ft_strlen("Hello"));

	printf("Compair -> %d\n", ft_strcmp("Hella", "Hellb"));
}
