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
		printf("电脑所下位置：\n");
		Computerbelow(arr, ROW, COL);
		Print(arr, ROW, COL);
		if (is_over(arr, ROW, COL) != 'c')
			break;
	}
	if (is_over(arr, ROW, COL) == '*')
		printf("玩家获胜!\n");
	else if (is_over(arr, ROW, COL) == '#')
		printf("电脑获胜!\n");
	else
		printf("平局!\n");
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("请输入：");
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
			break;
		}

	} while (input);

	return 0;
}