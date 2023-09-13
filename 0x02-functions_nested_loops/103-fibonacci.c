#include <stdio.h>

/**
* main - The main function of the Fibonacci program.
* This function calculates and prints the sum of even
* Fibonacci numbers below 4 million.
* @return 0 for successful execution, non-zero for errors
*/
int main(void)
{
unsigned long int j, k, next, sum;
j = 1;
k = 2;
sum = 0;
while (j <= 4000000)
{
if (j % 2 == 0)
{
sum += j;
}
next = j + k;
j = k;
k = next;
}
printf("The sum of even Fibonacci numbers below 4 million is: %lu\n", sum);
return (0);
}
