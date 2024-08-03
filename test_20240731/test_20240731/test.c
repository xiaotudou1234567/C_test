#include <stdio.h>

void swap(char arr1[], char arr2[], int sz)
{
	int temp = 0;
	for (int i = 0; i < sz; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "fghij";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	swap(arr1, arr2, sz);
//
//	return 0;
//}

//不创建第三个变量，交换两个数的值

//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num1 ^ num2;
//	
//	printf("%d %d", num1, num2);
//
//	return 0;
//}

//求取某个数二进制数中1的个数

//int main()
//{
//	int num = -1;
//	int count = 0;
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num>>i)&1) ==1)
//		{
//			count++;
//		}
//	}
//
//	while (num)
//	{
//		count++;
//		num = num & num - 1;
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

void test(char arr[])
{
	printf("%d", sizeof(arr));
}

//int main()
//{
//	char arr[] = "abcdefg";
//
//	printf("%d\n", sizeof(arr));
//	test(arr);
//
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));
	return 0;
}