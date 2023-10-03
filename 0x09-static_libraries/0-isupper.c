#include "main.h"

/**
 * _isupper - check if the char is upper case or not
 *
 * @c: input of the char
 *
 * Return:1 if the char is uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
