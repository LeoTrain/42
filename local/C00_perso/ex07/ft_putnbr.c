#include <unistd.h>

void ft_putnbr(int nb)
{
  if (nb < 0)
  {
    write(1, "-", 1);
    nb = -nb;
  }
  if (nb == 2147483647)
  {
    write(1, "2", 1);
    nb = 147483647;
  }
  if (nb > 10)
  {
    ft_putnbr(nb / 10);
  }
  char n = (nb % 10) + 48;
  write(1, &n, 1);
}

int main(void)
{
  ft_putnbr(42);
  write(1, "\n", 1);
  ft_putnbr(2147483647);
  write(1, "\n", 1);
  ft_putnbr(-2147483647);
}
