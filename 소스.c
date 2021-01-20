#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fivonachi(int a, int b, int count,int n)
{

	if (count == n)
	{
		return a;
	}

	a = a + b;
	
	return fivonachi(b, a, count + 1, n);
}

int main()
{
	int number;
	scanf("%d", &number);

	printf("%d", fivonachi(0,1,0,number));

	return 0;
}