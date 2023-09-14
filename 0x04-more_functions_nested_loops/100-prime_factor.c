#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: sqr root of x
*/

double _sqrt(double x)
{
        float sqrt, tmp;

        sqrt = x/2;
        tmp = 0;
        while (sqrt != tmp)
        {
                tmp = sqrt;
                sqrt = (x / tmp + tmp) / 2;

        }
        return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest prime factor of  num
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
        int prmNu, largest;

        while (num % 2 == 0)
                num = num / 2;
        for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
 for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
        {
                while (num % prmNu == 0)
                {
                        num = num /prmNu;
                        largest = prmNu;
                }
        }
        if (num > 2)
                largest = num;
        printf("%d\n", largest);
}

/**
 * main - entery point
 *
 * Return: 0 when success
*/

int main(void)
{
        largest_prime_factor(612852475143);

        return (0);
}
