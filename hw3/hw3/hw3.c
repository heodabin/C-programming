#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int row = 5;
	char star = '*';
	int blank = row - 1;
	int star_num = 1;

	for (int i = 1; i <= row; i++)
	{
		for (int i = blank; i >= 1; i--)
		{
			printf(" ");
		}
		for(int i = 1; i <= star_num; i++)
		{
			printf("%c", star);
		}
		
		star_num = star_num + 2;
		blank--;
		printf("\n");
	}

	return 0;
}