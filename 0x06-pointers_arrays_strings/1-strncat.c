#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to use from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *orig_dest = dest;
    int i = 0;

    /* Move dest pointer to its end */
    while (*dest)
        dest++;

    /* Copy at most n characters from src to dest */
    while (*src && i < n)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    /* Terminate the string if we've copied n characters */
    if (i == n)
        *dest = '\0';

    return (orig_dest);
}
