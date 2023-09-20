#include "main.h"

/*
 * _strcat() - Concatenates two strings.
 *
 * @dest: The string to append the source string to.
 * @src: The string to append to the destination string.
 *
 * Returns a pointer to the resulting string dest.
 */
har *_strcat(char *dest, const char *src) 
{

	int i, j;
	
	i = 0;

	while (dest[i])
		i++;


	for (j = 0; src[j] ; j++)
	
		dest[i++] = src[j];

	return (dest);
}
