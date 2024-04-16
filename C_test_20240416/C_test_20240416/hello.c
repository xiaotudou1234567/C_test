#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int campare_max(int x, int y)
{
	if (x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int num1 = 0, num2 = 0;

	while (scanf("%d %d", &num1,&num2) != EOF)
	{
		printf("%d\n", campare_max(num1, num2));
	}
	return 0;
}

//
//int main()
//{
//	printf("hello\n");
//	return 0;
//}