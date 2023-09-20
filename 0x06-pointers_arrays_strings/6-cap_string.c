#include "main.h"
#include <ctype.h>

char *cap_string(char *str)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && islower(str[i]))
            str[i] = toupper(str[i]);

        for (j = 0; separators[j] != '\0'; j++)
        {
            if (str[i] == separators[j] && islower(str[i + 1]))
            {
                str[i + 1] = toupper(str[i + 1]);
            }
        }
    }
    return (str);
}
