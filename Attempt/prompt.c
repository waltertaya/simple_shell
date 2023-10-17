#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
char *line = NULL;
size_t n = 0;
char *token;
char *delim = " ";

printf("$");

getline(&line, &n, stdin);
printf("%s\n",line);

char *str = malloc(sizeof(char) * strlen(line));
strcpy(str, line);
token = strtok(str, delim);
while(token)
{
printf("%s\n",str);
token = strtok(NULL, delim);
}

free(line);
return(0);
}