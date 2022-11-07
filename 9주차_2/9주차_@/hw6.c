#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void odd(int *odd, int size)
{
	printf("Odd numbers:");
	int i;
	for (i = 0; i < size; i++)
	{
		if (odd[i] % 2 != 0)
		{
			printf("%d", odd[i]);
		}
	}
	printf("\n");
}

void even(int *even, int size)
{
	printf("Even numbers:");
	int i;
	for (i = 0; i < size; i++)
	{
		if (even[i] % 2 == 0)
		{
			printf("%d", even[i]);
		}
	}
	printf("\n");
}

int main(void)
{
	int arr[5];
	int len;

	for (int i = 0; i < 5; i++)
	{
		printf("Please input five integers");
		scanf("%d", &arr[i]);
	}
	len = sizeof(arr) / sizeof(int);

	
	odd(arr,len);
	even(arr, len);

	return 0;
}



