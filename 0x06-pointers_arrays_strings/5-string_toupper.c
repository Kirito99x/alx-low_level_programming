#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to change.
 * Return: Pointer to the changed string.
 */
char *string_toupper(char *str)
{
    char *orig = str;

    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str -= 32;  /* ASCII difference between uppercase and lowercase */
        }
        str++;
    }

    return (orig);
}
