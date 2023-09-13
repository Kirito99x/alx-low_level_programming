#include"main.h"
/**
 * _abs - function that computes the absloute value of an intger
 *
 * @c: takes in intger type input for function
 *
 *Return: return 0 when success
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);

}
