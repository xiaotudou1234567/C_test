#include "game.h"

void menu()
{
	printf("******��ӭ����ɨ����Ϸ*******\n");
	printf("********1. ������Ϸ**********\n");
	printf("********0. �Ƴ���Ϸ**********\n");
	printf("*****************************\n");
}

void game()
{
	char board[ROWS][COLS];
	char show[ROWS][COLS];
	initial(board, ROW, COL, '0');
	initial(show, ROW, COL, '*');
	place(board, ROW, COL);
	//present(board, ROW, COL);
	clear(board, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:");
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
			printf("����������������룡\n");
		}

	} while (input);

	return 0;
}