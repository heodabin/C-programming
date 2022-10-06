#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;

	printf("Please enter a number: ");
	scanf("%d", &number);

	for (int i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			sum++;
		}
	}

	if (sum > 2)
	{
		printf("it is not a prime number.\n");
	}
	else
	{
		printf("it is a prime number.\n");
	}

	return 0;
}