#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int size = sizeof(n) / sizeof(int);
	char str[size];
	int lastDigit;

	sprintf(str, "%d", n);
	sprintf(lastDigit, "%c", str[size - 1]);
	printf("Last digit of %d is %c", n, str[size - 1]);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf("and is 0\n");
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
