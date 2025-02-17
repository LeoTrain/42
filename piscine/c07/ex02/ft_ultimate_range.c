#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

#include <stdio.h>

int main(void)
{
	int	*range;
	if (ft_ultimate_range(&range, 2, 5) != -1)
		for (int i = 0; i < 3; i++)
		{
			printf("%d\n", range[i]);
		}
	free(range);
}
