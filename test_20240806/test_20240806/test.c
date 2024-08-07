#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//struct school
//{
//	char name[10];
//	int num;
//}sc1 = {"NY",96};
//
//struct stu
//{
//	char name[20];
//	int age;
//	int *p;
//	struct school sc;
//};
//
//void print(struct stu* p)
//{
//	printf("%d", p->age);
//}
//
//int main()
//{
//	struct stu s1 = { .name="Xiaoming",.p=NULL,.age=12,.sc={"NY",96} };
//
//	//s1.age = 10;
//	//strcpy(s1.name, "Xiaohong");
//	//s1.name[0] = 'L';
//
//	struct stu* p = &s1;
//	//p->age = 10;
//	//p->name[0] = 'L';
//	print(p);
//
//	return 0;
//}

void oesort(int *p,int num)
{
	int temp = 0, i = 0, j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = i+1; j < num; j++)
		{
			if ((*(p + i)) % 2 == 0 && (*(p + j)) % 2 != 0)
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}

void my_strcpy(char *dis, const char* sour)
{
	assert(dis && sour);
	char* p = dis;
	while (*sour)
	{
		*(p++) = *(sour++);
	}
	*(p++) = *(sour++);
}

int my_strlen(char *arr)
{
	assert(arr);
	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}

int main()
{
	char arr[20] = "xxxxxxxxxxxxxx";
	char s[] = "abcde";

	/*my_strcpy(arr,s);*/
	printf("%d", my_strlen(s));

	return 0;
}