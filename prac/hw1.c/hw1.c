#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;

	

	printf("%d \n",num3);
	printf("%d \n", num4);
	printf("%d \n", num5);

	return 0;
}