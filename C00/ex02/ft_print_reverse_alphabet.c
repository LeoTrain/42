#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  for (int i = 122; i >= 97; i--)
  {
    char c = i;
    write(1, &c, 1);
  }
}

int main(void)
{
  ft_print_reverse_alphabet();
  return 1;
}
