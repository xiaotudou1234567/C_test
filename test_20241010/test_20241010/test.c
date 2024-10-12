#include "Stack.h"
#include "QList.h"

void test1() {
	Stack st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPop(&st);
	StackPop(&st);
	printf("%d\n", StackTop(&st));
	printf("%d\n", StackSize(&st));
	StackDestroy(&st);
}

void test2() {
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePop(&q);
	QueuePush(&q, 4);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	QueuePush(&q, 1);
	printf("front:%d\n", QueueFront(&q));
	printf("back:%d\n", QueueBack(&q));
	printf("size:%d\n", QueueSize(&q));
	printf("empty:%d\n", QueueEmpty(&q));
	QueueDestory(&q);
}

int main() {

	test2();

	return 0;
}