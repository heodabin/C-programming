#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float kilo, mile;
	printf("km�� �Է��ϼ���: ");
	scanf("%f", &kilo);

	mile = kilo / 1.609;
	printf("%.1f km is equal to %.1f miles", kilo, mile);

	return 0;
}
