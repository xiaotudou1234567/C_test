#include "SeqList.h"

void test1()
{
	SL a;
	SeqListInit(&a);
	CheckCapacity(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPopback(&a);
	SeqListPopback(&a);
	SeqListPrint(&a);
	SeqListDestory(&a);
}

void test2()
{
	SL a;
	SeqListInit(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPushFront(&a, 4);
	SeqListPushFront(&a, 5);
	SeqListPrint(&a);
	SeqListDestory(&a);
}

void test3()
{
	SL a;
	SeqListInit(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPushFront(&a, 4);
	SeqListPushFront(&a, 5);
	SeqListPopFront(&a);
	SeqListPopFront(&a);
	SeqListPopFront(&a);
	SeqListPopFront(&a);
	SeqListPopFront(&a);
	SeqListPopFront(&a);
	SeqListPrint(&a);
	SeqListDestory(&a);
}

void test4()
{
	SL a;
	SeqListInit(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPushFront(&a, 6);
	SeqListPushFront(&a, 7);
	SeqListPopFront(&a);
	SeqListPrint(&a);
	printf("%d\n", SeqListFind(&a, 6));
	SeqListDestory(&a);
}

void test5()
{
	SL a;
	SeqListInit(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPushFront(&a, 6);
	SeqListInsert(&a, SeqListFind(&a, 4), 8);
	SeqListPrint(&a);
	SeqListDestory(&a);
}

void test6()
{
	SL a;
	SeqListInit(&a);
	SeqListPushback(&a, 1);
	SeqListPushback(&a, 2);
	SeqListPushback(&a, 3);
	SeqListPushback(&a, 4);
	SeqListPushback(&a, 5);
	SeqListPushFront(&a, 6);
	SeqListInsert(&a, SeqListFind(&a, 4), 8);
	SeqListPrint(&a);
	SeqListErase(&a, 1);
	SeqListPrint(&a);
	SeqListDestory(&a);
}


int main()
{
	test6();
	return 0;
}