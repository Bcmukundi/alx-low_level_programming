#include <stdio.h>
/**
 * main - this function computes and prints the sum of all the multiples
 * 3 or 5 below
 * Return:Always 0
 */

int main(void)
{
	int i, sum = 0;
	int endpoint = 1024;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}

