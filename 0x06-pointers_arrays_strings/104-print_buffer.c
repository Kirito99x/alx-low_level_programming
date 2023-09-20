#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
        putchar('\n');

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", b[i + j]);
            else
                printf("  ");
            if (j % 2 == 1)
                putchar(' ');
        }
        for (j = 0; j < 10 && i + j < size; j++)
        {
            char c = b[i + j];
            putchar((c > 31 && c < 127) ? c : '.');
        }
        putchar('\n');
    }
}
