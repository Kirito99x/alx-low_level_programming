#include"main.h"

/**
 * print_to_98: print natural numbers from n to 98 counts separated by comma followed by space and numbr should be printed by order
 *
 *@n: int input
 */
void print_to_98(int n)
{
	int count;
	if (n > 98)
		for (count = n ; count > 98; count++)
			printf("%d.", count);
	else
		for (count = n ; count < 98; count++)
                        printf("%d.", count);
	printf("98\n");
}
