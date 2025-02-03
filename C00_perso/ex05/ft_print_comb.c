#include <unistd.h>

void ft_print_comb(void)
{
  for (char a = 48; a <= 55; a++)
  {
    for (char b = a + 1; b <= 56; b++)
    {
      for (char c = b + 1; c <= 57; c++)
      {
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        if (!(a == 55 && b == 56 && c == 57))
        {
          write(1, ", ", 2);
        }
      }
    }
  }
}


int main(void)
{
  ft_print_comb();
}
