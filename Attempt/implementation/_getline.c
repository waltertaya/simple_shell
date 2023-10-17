#include "shell.h"

/**
 * _getline - reads what the user types in the shell
 * @lineptr: pointer to the buffer containing the line
 * @n: size of the buffer
*/

int _getline(char **lineptr, size_t *n)
{
    int i = 0, c = 0;
    char *buffer = NULL;

    buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
    while (1)
    {
        c = getchar();
        if (c == EOF || c == '\n')
        {
            buffer[i] = '\0';
            *lineptr = buffer;
            return (i);
        }
        else
        {
            buffer[i] = c;
        }
        i++;
    }
}