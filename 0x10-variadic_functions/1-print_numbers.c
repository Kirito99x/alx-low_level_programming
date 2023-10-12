#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, separated by a separator string.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * ...: The variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...) {
  /**
   * Declare a va_list variable to store the variable number of arguments.
   */
  va_list args;

  /**
   * Initialize the va_list variable to point to the first variable argument.
   */
  va_start(args, n);

  /**
   * Check if the separator argument is NULL. If it is not, print the separator
   * to the console.
   */
  if (separator != NULL) {
    printf("%s", separator);
  }

  /**
   * Iterate over the remaining arguments and print them to the console, separated
   * by the separator string (if provided).
   */
  for (unsigned int i = 0; i < n; i++) {
    printf("%d", va_arg(args, int));
    if (i < n - 1) {
      printf("%s", separator);
    }
  }

  /**
   * Print a new line character to the console.
   */
  printf("\n");

  /**
   * Clean up the va_list variable.
   */
  va_end(args);
}

