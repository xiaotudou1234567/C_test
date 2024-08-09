//×óÐýn¸ö×Ö·û
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* left_co(char* p, int n, int num)
{
	assert(n<=num);
	int i = 0;
	char arr[100] = { 0 };
	for (i = 0; i < n; i++)
	{
		arr[i] = *(p + i);
	}
	for (i = 0; i < num-n; i++)
	{
		*(p + i) = *(p + i + n);
	}
	for (i = num-n; i < num; i++)
	{
		*(p + i) = arr[i- (num - n)];
	}
	//for (i = 0; i < num; i++)
	//{
	//	printf("%c ", *(p + i));
	//}
	return p;
}

//int main()
//{
//	char arr[] = "abcdef";
//	int n = 0;
//	scanf("%d", &n);
//	int num = strlen(arr);
//
//	left_co(arr, n, num);
//}

int test(char* p1, char* p2, int num1, int num2)
{
	if (num1 != num2)
		return 0;
	if (strcmp(p1, p2) == 0)
		return 1;
	for (int i = 1; i <= num1; i++)
	{
		if (strcmp(p1, left_co(p2, i, num2)) == 0)
			return 1;
	}
	return 0;
}

void test2()
{
	int a = 1;
	char* p = (char*)&a;
	*p ? printf("Ð¡¶Ë") : printf("´ó¶Ë");
}

//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	scanf("%s %s", arr1, arr2);
//	int num1 = strlen(arr1), num2 = strlen(arr2);
//
//	printf("%d", test(arr1, arr2, num1, num2));
//}

int main()
{
	test2();
	return 0;
}