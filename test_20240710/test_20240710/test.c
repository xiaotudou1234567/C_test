#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

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

void is_prime(int n)
{
	int i,flag = 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d ", n);
	}
}

void conpare(int a, int b)
{
	int n = (a > b) ? a : b;
	printf("%d", n);
}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}