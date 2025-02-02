#include <unistd.h>

void ft_print_comb2(void)
{
  for (int a = 0; a <= 98; a++)
  {
    for (int b = a + 1; b <= 99; b++)
    {
      char first = (a / 10) + 48;
      char second = (a % 10) + 48;
      char third = (b / 10) + 48;
      char fourth = (b % 10) + 48;
      write(1, &first, 1);
      write(1, &second, 1);
      write(1, " ", 1);
      write(1, &third, 1);
      write(1, &fourth, 1);
      if (!(a == 98 && b == 99))
      {
        write(1, ", ", 2);
      }
    }
  }
}

int main(void)
{
  ft_print_comb2();
  return 1;
}
