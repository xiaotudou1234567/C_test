#include "List.h"

void test1() {
	LT* phead = CreatNode(0);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListPrintf(phead);
}

void test2() {
	LT* phead = CreatNode(0);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListPrintf(phead);
	ListPopback(phead);
	ListPopback(phead);
	ListPopback(phead);
	ListPrintf(phead);
}

void test3() {
	LT* phead = CreatNode(0);
	//ListPushback(phead, 1);
	//ListPushback(phead, 2);
	//ListPushback(phead, 3);
	ListPushfront(phead, 4);
	ListPushfront(phead, 5);
	ListPushfront(phead, 6);
	ListPopfront(phead);
	ListPrintf(phead);
}

void test4() {
	LT* phead = CreatNode(0);
	ListPushback(phead, 1);
	ListPushback(phead, 2);
	ListPushback(phead, 3);
	ListInsert(ListFind(phead,1),5);
	ListInsert(phead->next, 6);
	ListErase(ListFind(phead, 5));
	ListPrintf(phead);
	ListDestory(phead);
}

int main() {

	test4();

	return 0;
}