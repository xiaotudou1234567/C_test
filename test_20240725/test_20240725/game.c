#include "game.h"

void initial(char arr[ROWS][COLS], int row, int col, char symbol)
{
	int i, j = 0;
	for (i = 0; i < row + 2; i++)
	{
		for (j = 0; j < col + 2; j++)
		{
			arr[i][j] = symbol;
		}
	}
}

void present(char arr[ROWS][COLS], int row, int col)
{
	printf("******扫雷游戏******\n");
	int i, j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("******扫雷游戏******\n");
}

void place(char arr[ROWS][COLS], int row, int col)
{
	int numbe = num;

	while (numbe)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			numbe = numbe-1;
		}
	}
}

char count(char arr[ROWS][COLS], int i, int j)
{
	return arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j - 1] + arr[i][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1] - 7 * '0';
}

void all(char arr[ROWS][COLS], char arr2[ROWS][COLS], int i, int j)
{
	if (arr2[i][j] != ' ' && count(arr, i, j) == '0' && i >= 1 && i <= ROW && j >= 1 && j <= COL)
	{
		arr2[i][j] = ' ';
		all(arr, arr2, i - 1, j - 1);
		all(arr, arr2, i - 1, j);
		all(arr, arr2, i - 1, j + 1);
		all(arr, arr2, i, j - 1);
		all(arr, arr2, i, j + 1);
		all(arr, arr2, i + 1, j - 1);
		all(arr, arr2, i + 1, j);
		all(arr, arr2, i + 1, j + 1);
	}
	if (count(arr, i, j) != '0' && i >= 1 && i <= ROW && j >= 1 && j <= COL)
		arr2[i][j] = count(arr, i, j);
}

int if_over(char arr[ROWS][COLS], int row, int col)
{
	int count = 0;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (arr[i][j] != '*')
				count++;
		}
	}
	return count;
}

void clear(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)
{
	int i, j, numbe = 0;
	
	while (1)
	{
		printf("请输入你要排查的位置：");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (arr[i][j] == '1')
			{
				printf("爆炸了！游戏结束\n");
				present(arr, ROW, COL);
				break;
			}
			else
			{
				all(arr, arr2, i, j);
				present(arr2, ROW, COL);
			}
		}
		else
		{
			printf("输入位置非法！\n");
		}
		numbe = if_over(arr2, ROW, COL);
		if (numbe == (ROW * COL - num))
		{
			printf("排雷成功！\n");
			break;
		}
	}
}