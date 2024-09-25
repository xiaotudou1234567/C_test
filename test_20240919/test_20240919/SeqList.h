#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Datatype;

typedef struct SeqList{
	Datatype* List;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* psl);
void SeqListDestory(SL* psl);
void SeqListPrint(SL* psl);
void CheckCapacity(SL* psl);
void SeqListPushback(SL* psl, Datatype num);
void SeqListPopback(SL* psl);
void SeqListPushFront(SL* psl, Datatype num);
void SeqListPopFront(SL* psl);
int SeqListFind(SL* psl, Datatype num);
void SeqListInsert(SL* psl, int pos, Datatype num);
void SeqListErase(SL* psl, int pos);