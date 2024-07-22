#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 4
#define COL 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Initial(char arr[ROW][COL], int row, int col);
void Print(char arr[ROW][COL], int row, int col);
void Playbelow(char arr[ROW][COL], int row, int col);
void Computerbelow(char arr[ROW][COL], int row, int col);
char is_over(char arr[ROW][COL], int row, int col);