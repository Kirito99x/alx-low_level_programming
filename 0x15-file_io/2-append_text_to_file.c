#include "main.h"

/**
 * append_text_to_file - append text to file
 *
 * @filename: the name of the file to create
 *
 * @text_content: the text content to append to file
 *
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;  // Return -1 if filename is NULL.
    }

    if (text_content == NULL) {
        return 1;  // Return 1 if text_content is NULL (no text to add).
    }

    FILE *file = fopen(filename, "a");  // Open the file in append mode.

    if (file == NULL) {
        return -1;  // Return -1 if the file couldn't be opened.
    }

    int success = fprintf(file, "%s", text_content);

    fclose(file);  // Close the file.

    if (success < 0) {
        return -1;  // Return -1 if there was an error while writing to the file.
    }

    return 1;  // Return 1 on success.
}
