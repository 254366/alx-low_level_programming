#include <stdio.h>
/**
 * main - Entry point,fibonacci sequence
 * Description: prints the sum of even-valued
 * fibonacci sequence not exceed 4 million
 * Returns: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sun;

	j = 1;
	k = 2;
	sun = 0;
	for (i = i; i <= 33; ++j)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("\n", sun);
	return (0);
}
