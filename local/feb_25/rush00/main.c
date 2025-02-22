#include <unistd.h>

void rush(int w, int h)
{
  if (w < 0 || h < 0)
    return ;
  int current_height = 0;
  while (current_height <= h - 1)
  {
    if (current_height == 0 || current_height == h - 1)
    {
      int i = 0;
      while (i <= w - 1)
      {
        if (i == 0 || i == w - 1)
          write(1, "o", 1);
        else
          write(1, "-", 1);
        i++;
      }
    }
    else
    {
      int i = 0;
      while (i <= w - 1)
      {
        if (i == 0 || i == w - 1)
          write(1, "|", 1);
        else
          write(1, " ", 1);
        i++;
      }
    }
    current_height++;
    write(1, "\n", 1);
  }
}

int main(void)
{
  rush(5, 3);
  // rush(5, 1);
  // rush(1, 1);
  // rush(1, 5);
  // rush(123, 42);
}
