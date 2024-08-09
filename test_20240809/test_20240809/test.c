#include <stdio.h>
#include <stdlib.h>

void Swap(char *p1,char *p2,int size) 
{
	char temp = 0;
	for (int i = 0; i < size; i++)
	{
		temp = *(p1 + i);
		*(p1 + i) = *(p2 + i);
		*(p2 + i) = temp;
	}
}

int cmp_int(const void *p1, const void *p2)
{
	int* pp1 = (int*)p1;
	int* pp2 = (int*)p2;
	return *pp1-*pp2;
}

void bubble_sort(void *p, int sz, int num, int (*cmp)(const void *, const void*))
{
	char *arr = (char *)p;
	int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp(arr + j * num, arr + j * num + num) > 0)
				Swap(arr + j * num, arr + j * num + num, num);
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num = sizeof(arr[0]);

	bubble_sort(arr, sz, num, cmp_int);
	return 0;
}