#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
    /* Move the destination pointer to its end. */
    char *orig_dest = dest;
    while (*dest != '\0') {
        dest++;
    }

    /* Copy the source string to the destination string. */
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    /* Add a terminating null byte to the end of the concatenated string. */
    *dest = '\0';

    /* Return a pointer to the resulting string. */
    return orig_dest;
}
