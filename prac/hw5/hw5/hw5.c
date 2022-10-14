#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int binary(int num);

int main(void)
{
	int num=0;

	printf("Please enter a number:");
	scanf("%d", &num);
	binary(num);

	return 0;
}

int binary(int num)
{
	if (num == 0 | num == 1)
	{
		printf("%d", num);
	}
	else
	{
		binary(num / 2);
		printf("%d", num % 2);
		
	}
	return 0;
}