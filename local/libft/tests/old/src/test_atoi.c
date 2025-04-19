#include "../../libft/libft.h"
#include "../tests.h"

void add_to_atoi_test(t_test_int *tests, int pos, char *str) {
  char *desc = (char *)malloc(100 * sizeof(char));
  sprintf(desc, "Test %d: '%s'", pos + 1, str);
  int expected = atoi(str);
  int result = ft_atoi(str);
  init_int_test(tests, pos, desc, result, expected, result == expected);
}

void test_atoi() {
  int tests_amount = 8;
  t_test_int tests[tests_amount];
  add_to_atoi_test(tests, 0, "123");
  add_to_atoi_test(tests, 1, "-123");
  add_to_atoi_test(tests, 2, "0");
  add_to_atoi_test(tests, 3, "2147483647");
  add_to_atoi_test(tests, 4, "-2147483648");
  add_to_atoi_test(tests, 5, "");
  add_to_atoi_test(tests, 6, "++397294/fd.f");
  add_to_atoi_test(tests, 7, "   ");
  add_to_atoi_test(tests, 7, "   ");
  display_int_test(tests, tests_amount, "ATOI");
  for (int i = 0; i < tests_amount; i++)
    free(tests[i].description);
}
