#include "SList.h"

void test1() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	PrintSList(phead);
}

void test2() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	PrintSList(phead);
}

void test3() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPopBack(&phead);
	SListPushFront(&phead, 8);
	SListPushFront(&phead, 9);
	PrintSList(phead);
}

void test4() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPopBack(&phead);
	SListPushFront(&phead, 8);
	SListPushFront(&phead, 9);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	SListPopFront(&phead);
	PrintSList(phead);
}

void test5() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPushFront(&phead, 8);
	SListPushFront(&phead, 9);
	PrintSList(phead);
	SList* pos = SListFind(phead, 9);
	SListInsert(&phead, pos, 7);
	PrintSList(phead);
}

void test6() {
	SList* phead = NULL;
	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPushFront(&phead, 8);
	SListPushFront(&phead, 9);
	PrintSList(phead);
	SList* pos = SListFind(phead, 4);
	SListInsert(&phead, pos, 7);
	PrintSList(phead);
	pos = SListFind(phead, 1);
	SListErase(&phead, pos);
	PrintSList(phead);
}

int main() {
	test6();
	return 0;
}