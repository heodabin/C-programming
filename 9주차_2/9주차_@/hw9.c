#include<stdio.h>

#if 1
int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void)
{
	int ch;
	printf("문자열입력:");
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		ch = convCase(ch);
		putchar(ch);
		if (ch == -1)
		{
			break;
		}
		
	}
	
	
	return 0;
}
#endif