#include "main.h"

/**
 * main - prints number 0 - 100 followed by a new line numbers that are 
 * 	mul by 3 are fizz by 5 are buzz by 3 or 5 are fizzbuzz
 *
 * Return: 0 when success
*/ 

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
