#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printtable(int n)
{
	int i,j = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}

}

void swap(int *a, int *b)
{
	int n = 0;
	n = *a;
	*a = *b;
	*b = n;
}

int is_year(int n)
{
	return ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) ? 1 : 0;
}

int main()
{
	int a,b = 0;
	while (scanf("%d", &a) != EOF)
	{
		is_year(a)? printf("ÊÇ\n"): printf("·ñ\n");
	}

	return 0;
}