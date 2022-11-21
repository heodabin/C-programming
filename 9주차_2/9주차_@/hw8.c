#include<stdio.h>
#include <math.h>

double stand(int arr[], int len)
{
	double sum = 0;
	double adv, stand, result, mid=0;
	double pow(double a, double b);
	double sqrt(double x);

	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	adv = sum / 5;

	for (int i = 0; i < len; i++)
	{
		mid += (pow(arr[i] - adv, 2)) / 5;
	}
	result = sqrt(mid);
	return result;
}

int main(void)
{
	int arr[5];
	double sum = 0;

	printf("정수 5개 입력:");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Standard Deviation: %.3lf", stand(arr, sizeof(arr) / sizeof(int)));
	return 0;
}
