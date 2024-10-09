#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDatatype;

typedef struct ListNode {
	LTDatatype data;
	struct ListNode* prev;
	struct ListNode* next;
}LT;

LT* CreatNode(LTDatatype x);
void ListPrintf(LT* phead);
void ListPushback(LT* phead, LTDatatype x);
void ListPopback(LT* phead);
void ListPushfront(LT* phead, LTDatatype x);
void ListPopfront(LT* phead);
LT* ListFind(LT* phead, LTDatatype x);
void ListInsert(LT* pos, LTDatatype x);
void ListErase(LT* pos);
void ListDestory(LT* phead);

