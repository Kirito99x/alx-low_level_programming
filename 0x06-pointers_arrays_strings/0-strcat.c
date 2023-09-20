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
    char *orig_dest = dest;

    /* move dest pointer to its end */
    while (*dest)
        dest++;

    /* copy src to dest */
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; /* terminate the concatenated string */

    return orig_dest;
}
