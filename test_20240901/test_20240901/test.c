#include "contacts.h"

void menu()
{
	printf("**********��ӭ����ͨѶ¼************\n");
	printf("*******1. add       2. delet********\n");
	printf("*******3. find      4. change*******\n");
	printf("*******5. show      6. clear********\n");
	printf("*******7. sort      0. exit*********\n");
}

int main()
{
	int input = 0;
	Cont contact = {NULL,0,0};
	
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case add:
			Add(&contact);
			break;
		case delet:
			Delet(&contact);
			break;
		case find:
			Find(&contact);
			break;
		case change:
			Change(&contact);
			break;
		case show:
			Show(&contact);
			break;
		case clear:
			Clear(&contact);
			break;
		case sort:
			qsort(contact.person, contact.num, sizeof(Stu), compare);
			Show(&contact);
			break;
		case ex:
			printf("�˳��ɹ���");
			break;
		}

	} while (input);

	free(contact.person);
	contact.person = NULL;

	return 0;
}