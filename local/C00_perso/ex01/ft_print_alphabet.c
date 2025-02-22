#include <unistd.h>

void ft_print_alphabet(void)
{
  for (int i = 97; i <= 122; i++)
  {
    char c = i;
    write(1, &c, 1);
  }
}

int main(void)
{
  ft_print_alphabet();
}
