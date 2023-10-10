#include <stdio.h>

/**
 * main - print the name of the file it has been compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
