#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int number(int count)
{
	if (count == 0)
	{
		return 1;
	}
	return count*number(count - 1);
}

int main()
{
	int input;
	scanf(" %d", &input);
	printf("%d\n",number(input));

	return 0;
}
