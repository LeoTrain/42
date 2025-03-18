#include <unistd.h>

void	ft_putout(int nb, int *tab, int pos)
{
	int i;
	char	c;

	if (pos == 1)
		write(1, ", ", 2);
	i = 0;
	while (i < nb)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_print_combn_increment(int nb, int *tab)
{
	int i;
	int max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i]++;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int nb)
{
	int tab[10];
	int i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
	ft_putout(nb, tab, 0);
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
			tab[nb - 1] += 1;
		else
			ft_print_combn_increment(nb, tab);
		ft_putout(nb, tab, 1);
	}
}

int main(void)
{
	ft_print_combn(9);
}
