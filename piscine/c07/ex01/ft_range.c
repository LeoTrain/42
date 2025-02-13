#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	size = max - min;
	tab = malloc(4 * size);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	int	*tab = ft_range(2, 5);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", tab[i]);
	}
}
