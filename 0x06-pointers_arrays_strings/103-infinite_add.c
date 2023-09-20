#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, carry, sum, len1, len2;

    len1 = strlen(n1);
    len2 = strlen(n2);
    if (len1 > size_r || len2 > size_r || size_r < 2)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    k = 0;
    carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
            carry = 0;

        r[k++] = (sum + '0');
        if (k >= (size_r - 1))
        {
            r[k] = '\0';
            return (0);
        }
    }
    r[k] = '\0';
    
    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }
 
