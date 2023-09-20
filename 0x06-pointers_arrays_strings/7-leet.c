#include "main.h"

char *leet(char *str)
{
    int i;
    char letters[] = "aAeEoOtTlL";
    char numbers[] = "43004300771";

    for (i = 0; str[i] != '\0'; i++)
    {
        int j;
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (str[i] == letters[j])
                str[i] = numbers[j];
        }
    }
    return (str);
}
