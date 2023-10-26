#include <stddef.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') {
            result = result << 1;
        } else if (b[i] == '1') {
            result = (result << 1) | 1;
        } else {
            return 0; // Invalid character encountered
        }
    }

    return result;
}

