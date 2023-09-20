#include "main.h"

/*
 * _strcat() - Concatenates two strings.
 *
 * @dest: The string to append the source string to.
 * @src: The string to append to the destination string.
 *
 * Returns a pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src) {
  int i = 0;
  int j = 0;

  while (dest[i] != '\0') {
    i++;
  }

  while (src[j] != '\0') {
    if (dest[i] == '\0') {
      return NULL;
    }

    dest[i] = src[j];
    i++;
    j++;
  }

  dest[i] = '\0';

  // The function returns a pointer to the resulting string dest.
  return dest;
}
