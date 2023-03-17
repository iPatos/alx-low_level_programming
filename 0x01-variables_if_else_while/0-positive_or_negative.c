#include<stdio.h>
#include<stlib.h>
#include<time.h>

/**
 * main - print if the number is positive, negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		print("%d is positive\n, n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		}
	else
	{
		printf("%d is megative\n, n");
	}
	return (0);
}
