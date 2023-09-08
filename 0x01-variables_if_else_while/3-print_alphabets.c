#include <stdio.h>

/**
* main - this is the function of this program
* Return: 0 to indicate successful execution.
*/

int main(void)

{

char x;

for (x = 'a'; x <= 'z'; x++)
putchar(x);

for (x = 'A'; x <= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}
