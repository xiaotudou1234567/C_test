#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct school
{
	char name[10];
	int num;
}sc1 = {"NY",96};

struct stu
{
	char name[20];
	int age;
	int *p;
	struct school sc;
};

void print(struct stu* p)
{
	printf("%d", p->age);
}

int main()
{
	struct stu s1 = { .name="Xiaoming",.p=NULL,.age=12,.sc={"NY",96} };

	//s1.age = 10;
	//strcpy(s1.name, "Xiaohong");
	//s1.name[0] = 'L';

	struct stu* p = &s1;
	//p->age = 10;
	//p->name[0] = 'L';
	print(p);

	return 0;
}