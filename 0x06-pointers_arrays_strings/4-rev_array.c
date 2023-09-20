#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to reverse.
 * @n: Number of elements of the array.
 */
void reverse_array(int *a, int n)
{
    int temp, i, j;

    i = 0;
    j = n - 1;

    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
