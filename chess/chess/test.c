#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("******** 1. play *********\n");
	printf("*********0. exit *********\n");
	printf("**************************\n");
}

void game()
{
	char arr[ROW][COL] = {0};
	Initial(arr, ROW, COL);
	Print(arr, ROW, COL);
	while (1)
	{
		Playbelow(arr, ROW, COL);
		Print(arr, ROW, COL);
		if (is_over(arr, ROW, COL) != 'c')
			break;
		printf("��������λ�ã�\n");
		Computerbelow(arr, ROW, COL);
		Print(arr, ROW, COL);
		if (is_over(arr, ROW, COL) != 'c')
			break;
	}
	if (is_over(arr, ROW, COL) == '*')
		printf("��һ�ʤ!\n");
	else if (is_over(arr, ROW, COL) == '#')
		printf("���Ի�ʤ!\n");
	else
		printf("ƽ��!\n");
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ������\n");
			break;
		default:
			break;
		}

	} while (input);

	return 0;
}