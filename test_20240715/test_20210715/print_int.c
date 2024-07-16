#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

void print_int(int n)
{
	if (n > 9)
		print_int(n / 10);
	printf("%d ", n % 10);
}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int power(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * power(n, k - 1);
//}
//
//int sum(int n)
//{
//	if (n <= 9)
//		return n;
//	else
//		return n % 10 + sum(n / 10);
//}
//
//size_t strlen(char* arr)
//{
//	if (*(arr + 1) == '\0')
//		return 1;
//	else
//		return 1 + strlen(arr + 1);
//}
//
//int strlen2(char* arr)
//{
//	int i = 1;
//	while (*(arr + 1) != '\0')
//	{
//		i++;
//		arr = arr + 1;
//	}
//	return i;
//}
//
//int fac(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int fac2(int n)
//{
//	int count = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		count = count * i;
//	}
//	return count;
//}