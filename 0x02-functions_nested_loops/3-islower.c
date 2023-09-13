#include"main.h"

/**
 * _islower - function to check if char is lower case letter
 *
 * @c: checks input of function
 *
 * Return: returns 1 if char is lower case else alwasy 0 success
 *
 */
int _islower(int c)
{
	if (c >=97 && c <= 122)
		return (1);
	return (0);
}
