#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct point
{
	char name[20];
	char country[20];
	int population;
} Point;

int main(void)
{
	struct point arr[3];
	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name>");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("Country>");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("Population>");
		scanf_s("%d", &arr[i].population);
		
	}
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. ", i + 1);
		printf("%s in ", arr[i].name);
		printf("%s with a population of ", arr[i].country);
		printf("%d people \n", arr[i].population);
	}
	return 0;
}