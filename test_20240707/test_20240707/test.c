#include <stdio.h>
#include <windows.h>

//int main()
//{
//	char arr1[] = "I love you";
//	char arr2[] = "**********";
//	printf("%s\n", arr2);
//	int right = sizeof(arr1)-2;
//	int left = 0;
//
//	while (left <= right)
//	{
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	
//	return  0;
//}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-1;
	int mid = 0;
	int key = 10;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr1[mid] < key)
		{
			left = ++mid;
		}
		else if (arr1[mid] > key)
		{
			right = --mid;
		}
		else
		{
			break;
		}
	}

	if (left <= right)
	{
		printf("%d", mid);
	}
	else
	{
		printf("Ã»ÕÒµ½");
	}
	
	return 0;
}