#include"main.h"

/**
 * main - entry point
 *
 * Description: print the sum of even valued fib seq not exceed 4 million 
 * Return: return 0 success
 */

int main(void)
{
	unsigned long fib1 =0, fib2=1, sum;
	folat total_sum;

	while (1)
	{
		sum = fib1 + fib2

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
