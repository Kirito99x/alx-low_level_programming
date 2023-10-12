#include <stdarg.h>

/**
 * Calculates the sum of all its parameters.
 *
 * @param n The number of parameters to sum.
 * @param ... The parameters to sum.
 *
 * @return The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
  va_list args;
  int sum = 0;

  if (n == 0)
  {
    return 0;
  }

  va_start(args, n);
  for (unsigned int i = 0; i < n; i++)
  {
    sum += va_arg(args, int);
  }
  va_end(args);

  return sum;
}

