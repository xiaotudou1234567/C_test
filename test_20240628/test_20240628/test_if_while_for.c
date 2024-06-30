#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[3] = { 0 };
//	int temp = 0;
//	int i, j = 0;
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i+1; j < 3; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 100;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 0;
//		for (int j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//			printf("%d ", i);
//		if (i % 400 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int num1,num2,i = 0;
//	int num_small = 0;
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 <= num2)
//	{
//		num_small = num1;
//	}
//	else
//	{
//		num_small = num2;
//	}
//
//	for (i = num_small; i > 0; i--)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			printf("%d ", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = i; j < 10; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int max = 0;
//	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//
//	for (int i = 0; i < sizeof(arr); i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//}

int main()
{
	double sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		double num = i;
		if (i % 2 != 0)
			sum += 1 / num;
		else
			sum -= 1 / num;
	}
	printf("%lf", sum);
	return 0;
}