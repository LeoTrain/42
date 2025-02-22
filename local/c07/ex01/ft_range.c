#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
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
