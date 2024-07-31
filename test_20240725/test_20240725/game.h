#pragma once

#define _CRT_SECURE_NO_WARNINGS	1
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define num 5

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initial(char arr[ROWS][COLS], int row, int col, char symbol);
void present(char arr[ROWS][COLS], int row, int col);
void place(char arr[ROWS][COLS], int row, int col);
void clear(char arr[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);
char count(char arr[ROWS][COLS], int i, int j);
void all(char arr[ROWS][COLS], char arr2[ROWS][COLS], int i, int j);
int if_over(char arr[ROWS][COLS], int row, int col);