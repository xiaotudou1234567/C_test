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
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("ADD");
			printf("����ʧ��\n");
			return;
		}
	}

	Stu* arr = contact->person;
	int i = contact->num;
	printf("�������������Ա����䡢�绰����ַ���ÿո�ֿ�����");
	scanf("%s %s %d %s %s", (arr + i)->name, (arr + i)->sex, &((arr + i)->age), (arr + i)->tel, (arr + i)->place);
	contact->num += 1;
	printf("���ӳɹ���\n");
}

void Show(Cont* contact)
{
	assert(contact);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("��������Ҫ������������");
	scanf("%s", input);
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		if (!(strcmp((arr + i)->name, input)))
		{
			printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\t\n",
				(arr + i)->name,
				(arr + i)->sex,
				(arr + i)->age,
				(arr + i)->tel,
				(arr + i)->place);
			break;
		}
	}
	printf("û�д��ˣ�\n");
}

void Change(Cont* contact)
{
	assert(contact);
	char input[NAME_MAX] = {0};
	printf("��������Ҫ�޸ĵ�������");
	scanf("%s", input);
	Stu* arr = contact->person;
	for (int i = 0; i < contact->num; i++)
	{
		if (!(strcmp((arr + i)->name, input)))
		{
			printf("�������������Ա����䡢�绰����ַ���ÿո�ֿ�����");
			scanf("%s %s %d %s %s", (arr + i)->name, (arr + i)->sex, &((arr + i)->age), (arr + i)->tel, (arr + i)->place);
			printf("�޸ĳɹ���\n");
			return;
		}
	}
	printf("û�д��ˣ�\n");
}

void Delet(Cont* contact)
{
	assert(contact);
	char input[NAME_MAX] = { 0 };
	printf("��������Ҫɾ����������");
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
			printf("ɾ���ɹ���\n");
			return;
		}
	}
	printf("û�д��ˣ�\n");
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