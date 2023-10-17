#include "shell.h"

/**
 * prompt - used to test our functions in the shell
 * @argc: number of arguments
 * @argv: array of arguments
 * @env: environment variables
 * Return: 0 on success
 */

int main(int argc, char **argv, char **env)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    (void)argc;
    (void)argv;
    (void)env;

    while (1)
    {
        printf("$ ");
        read = _getline(&line, &len);
        printf("%s\n", line);
        /*printf("$ %zu\n", read);*/
        if (read == -1)
            break;
    }
    free(line);
    return (0);
}