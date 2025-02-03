#include <stdio.h>

void ft_ft(int *nbr) { *nbr = 42; }

int main(void)
{
  int nbr = 10;
  printf("%d\n", nbr);
  ft_ft(&nbr);
  printf("%d", nbr);
  return 1;
}
