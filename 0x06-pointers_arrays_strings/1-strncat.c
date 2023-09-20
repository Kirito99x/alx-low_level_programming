#include "main.h"

/*
 * _strncat() - Concatenates two strings, copying at most n bytes from src.
 *
 * @dest: The string to append the source string to.
 * @src: The string to append to the destination string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Returns a pointer to the resulting string dest.
 */
char *_strncat(char *dest, const char *src, int n) {
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') {
		i++;
	}

	while (j < n && src[j] != '\0') {
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	// The function returns a pointer to the resulting string dest.
	return dest;
}
