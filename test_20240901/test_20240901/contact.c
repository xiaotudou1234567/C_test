#include "contacts.h"

void Add(Cont* contact)
{
	assert(contact);
	if (contact->capability == 0 || contact->capability == contact->num)
	{
		Stu* arr = (Stu*)realloc(contact->person, (contact->capability += EXPAND) * sizeof(Stu));
		if (arr != NULL)
		{
			contact->person = arr;
			contact->capability += EXPAND;
			printf("增容成功\n");
		}
		else
		{
			perror("ADD");
			printf("增容失败\n");
			return;
		}
	}

	Stu* arr = contact->person;
	int i = contact->num;
	printf("请输入姓名、性别、年龄、电话、地址（用空格分开）：");
	scanf("%s %s %d %s %s", (arr + i)->name, (arr + i)->sex, &((arr + i)->age), (arr + i)->tel, (arr + i)->place);
	contact->num += 1;
	printf("增加成功！\n");
}

void Show(Cont* contact)
{
	assert(contact);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "姓名", "年龄", "性别", "电话", "地址");
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\t\n", 
			(arr + i)->name, 
			(arr + i)->sex, 
			(arr + i)->age, 
			(arr + i)->tel, 
			(arr + i)->place);
	}
}

void Find(Cont* contact)
{
	assert(contact);
	char input[NAME_MAX];
	printf("请输入想要搜索的人名：");
	scanf("%s", input);
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		if (!(strcmp((arr + i)->name, input)))
		{
			printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "姓名", "年龄", "性别", "电话", "地址");
			printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\t\n",
				(arr + i)->name,
				(arr + i)->sex,
				(arr + i)->age,
				(arr + i)->tel,
				(arr + i)->place);
			break;
		}
	}
	printf("没有此人！\n");
}

void Change(Cont* contact)
{
	assert(contact);
	char input[NAME_MAX] = {0};
	printf("请输入想要修改的人名：");
	scanf("%s", input);
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		if (!(strcmp((arr + i)->name, input)))
		{
			printf("请输入姓名、性别、年龄、电话、地址（用空格分开）：");
			scanf("%s %s %d %s %s", (arr + i)->name, (arr + i)->sex, &((arr + i)->age), (arr + i)->tel, (arr + i)->place);
			printf("修改成功！\n");
			return;
		}
	}
	printf("没有此人！\n");
}

void Delet(Cont* contact)
{
	assert(contact);
	char input[NAME_MAX] = { 0 };
	printf("请输入想要删除的人名：");
	scanf("%s", input);
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		if (!(strcmp((arr + i)->name, input)))
		{
			while (i < contact->num - 1)
			{
				memcpy(arr + i, arr + i + 1, sizeof(Stu));
				i++;
			}
			contact->num -= 1;
			printf("删除成功！\n");
			return;
		}
	}
	printf("没有此人！\n");
}

void Clear(Cont* contact)
{
	assert(contact);
	memset(contact->person, 0, contact->num * sizeof(Stu));
	contact->num = 0;
}

int compare(void* a, void* b)
{
	return strcmp(((Stu*)a)->name, ((Stu*)b)->name);
}