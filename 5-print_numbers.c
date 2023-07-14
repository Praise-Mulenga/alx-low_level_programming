#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;

	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	for (n = 0; n < 9; n++)
	{
		printf("%d", n);
	}
	print("\n");
	return (0);
}
