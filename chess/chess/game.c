#include "game.h"

void Initial(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Print(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		else
		{
			for (int j = 0; j < col; j++)
			{
				printf("   ");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
	printf("\n");
}

void Playbelow(char arr[ROW][COL], int row, int col)
{
	int i, j = 1;
	while (1)
	{
		printf("请输入所下位置：");
		scanf("%d %d", &i, &j);
		if (i <= row && j <= row && arr[i - 1][j - 1] == ' ')
		{
			arr[i - 1][j - 1] = '*';
			break;
		}
		printf("输入错误!\n");
	}
}

void Computerbelow(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (arr[i][j] == ' ')
		{
			arr[i][j] = '#';
			break;
		}
	}
}

char is_over(char arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col-2; j++)
		{
			if (arr[i][j] == '*' && arr[i][j + 1] == '*' && arr[i][j + 2] == '*')
				return '*';
			if (arr[i][j] == '#' && arr[i][j + 1] == '#' && arr[i][j + 2] == '#')
				return '#';
		}
	}
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < row - 2; i++)
		{
			if (arr[i][j] == '*' && arr[i][j + 1] == '*' && arr[i][j + 2] == '*')
				return '*';
			if (arr[i][j] == '#' && arr[i][j + 1] == '#' && arr[i][j + 2] == '#')
				return '#';
		}
	}
	for (int i = 0; i < row - 2; i++)
	{
		if (arr[i][i] == '*' && arr[i + 1][i + 1] == '*' && arr[i + 2][i + 2] == '*')
			return '*';
		if (arr[i][i] == '#' && arr[i + 1][i + 1] == '#' && arr[i + 2][i + 2] == '#')
			return '#';
	}
	for (int i = 0; i < row - 2; i++)
	{
		if (arr[i][row - 1 - i] == '*' && arr[i + 1][row - 2 - i] == '*' && arr[i + 2][row - 3 - i] == '*')
			return '*';
		if (arr[i][row - 1 - i] == '#' && arr[i + 1][row - 2 - i] == '#' && arr[i + 2][row - 3 - i] == '#')
			return '#';
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 'c';
		}
	}
	return 'h';
}