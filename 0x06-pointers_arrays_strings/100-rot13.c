#include "main.h"

char *rot13(char *str)
{
    int i;
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; str[i] != '\0'; i++)
    {
        int j;
        for (j = 0; input[j] != '\0'; j++)
        {
            if (str[i] == input[j])
            {
                str[i] = output[j];
                break;
            }
        }
    }
    return (str);
}
