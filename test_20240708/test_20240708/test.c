#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("��ʼ�밴->1\n");
	printf("�����밴->0\n");
}

void game()
{
	int num = 0, random_num = rand()%10 + 1;
	while (1)
	{
		printf("������µ�����-> ");
		scanf("%d", &num);
		if (num > random_num)
		{
			printf("�´���\n");
		}
		else if (num < random_num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand(time(NULL));
	
	do
	{
		menu();
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����");
			break;
		default:
			printf("����������\n");
			break;
		}

	} while (input);
}

//int main()
//{
//	int i = 1, count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if ((i / 10) == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//	printf("\n%d", count);
//
//	return 0;
//}