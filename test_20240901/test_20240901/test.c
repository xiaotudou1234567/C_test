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
	Load(&contact);
	
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			Add(&contact);
			break;
		case DELET:
			Delet(&contact);
			break;
		case FIND:
			Find(&contact);
			break;
		case CHANGE:
			Change(&contact);
			break;
		case SHOW:
			Show(&contact);
			break;
		case CLEAR:
			Clear(&contact);
			break;
		case SORT:
			qsort(contact.person, contact.num, sizeof(Stu), compare);
			Show(&contact);
			break;
		case EXIT:
			Save(&contact);
			Clear(&contact);
			printf("�˳��ɹ���");
			break;
		}

	} while (input);

	free(contact.person);
	contact.person = NULL;

	return 0;
}