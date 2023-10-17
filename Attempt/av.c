#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac,char **av)
{
while(*av != NULL){
printf("argument = %s\n",*av);
*av++;
}
return (0);
}