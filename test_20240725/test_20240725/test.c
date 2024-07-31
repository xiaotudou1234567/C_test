#include "game.h"

void menu()
{
	printf("******欢迎来到扫雷游戏*******\n");
	printf("********1. 进入游戏**********\n");
	printf("********0. 推出游戏**********\n");
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
		printf("请选择:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}

	} while (input);

	return 0;
}