#include <stdio.h>

/**
* main - Entry point
*
* Description: print all possible different combinations of two digits
*
* Return: Always 0 (success)
*/

int main(void)

{

for (int i = 0; i <= 99; i++)
{
for (int j = i; j <= 99; j++)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
