int ft_is_prime(int nb)
{
  if (nb < 0)
    return 0;
  if (nb == 0 || nb == 1)
    return 0;
  for (int i = 2; i < nb; i++)
  {
    if (nb % i == 0)
      return 0;
  }
  return 1;
}
