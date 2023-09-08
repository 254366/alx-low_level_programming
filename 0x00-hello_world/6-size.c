#include <stdio.h>
/**
* main - entry point
* Return: always 0 (success)
*/
int main(void)
{
printf("size of a char: %lu byte(s)", sizeof(char));
printf("size of an int: %lu bytes(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(float));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
