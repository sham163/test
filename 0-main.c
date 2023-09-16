#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char n = 's';
char *name = "sham";
_printf("hi my name is %c", n);
putchar('\n');
_printf("hi my name is %s", name);
putchar('\n');
_printf("hi my name is %%");
putchar('\n');
return (0);

}
