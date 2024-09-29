#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SListDatatype;

typedef struct SListNode {
	SListDatatype num;
	struct SListNode* next;
}SList;

SList* CreatSListNode(SListDatatype num);
void PrintSList(SList* phead);
void SListPushBack(SList** pphead, SListDatatype num);
void SListPopBack(SList** pphead);
void SListPushFront(SList** pphead, SListDatatype num);
void SListPopFront(SList** pphead);
SList* SListFind(SList* phead, SListDatatype num);
void SListInsert(SList** pphead, SList* pos, SListDatatype num);
void SListErase(SList** pphead, SList* pos);