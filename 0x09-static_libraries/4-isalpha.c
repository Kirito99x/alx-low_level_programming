#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet.
 * @c: the character to check.
 *
 * Return: 1 if c is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
