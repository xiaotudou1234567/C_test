#include "List.h"

LT* CreatNode(LTDatatype x) {
	LT* Node = (LT*)malloc(sizeof(LT));
	if (Node == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	else {
		Node->next = Node;
		Node->prev = Node;
		Node->data = x;
	}
	return Node;
}

void ListPushback(LT* phead, LTDatatype x) {
	assert(phead);
	LT* newnode = CreatNode(x);

	LT* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	phead->prev = newnode;
	newnode->next = phead;
}

void ListPrintf(LT* phead) {
	assert(phead);

	printf("ÉÚ±øÎ» <=> ");
	LT* cur = phead->next;

	while (cur != phead) {
		printf("%d <=> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopback(LT* phead) {
	assert(phead);
	assert(phead->next != phead);

	LT* tail_prev = phead->prev->prev;
	LT* tail = phead->prev;

	free(tail);
	tail = NULL;
	tail_prev->next = phead;
	phead->prev = tail_prev;
}

void ListPushfront(LT* phead, LTDatatype x) {
	assert(phead);
	LT* newnode = CreatNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next->prev = newnode;
	phead->next = newnode;
}

void ListPopfront(LT* phead) {
	assert(phead);
	assert(phead->next != phead);

	LT* first_next = phead->next->next;
	LT* first = phead->next;

	free(first);
	first = NULL;

	phead->next = first_next;
	first_next->prev = phead;
}

LT* ListFind(LT* phead, LTDatatype x) {
	assert(phead);

	LT* cur = phead->next;
	while (cur != phead) {
		if (cur->data == x) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(LT* pos, LTDatatype x) {
	assert(pos);

	LT* newnode = CreatNode(x);
	LT* prev = pos->prev;
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(LT* pos) {
	assert(pos);

	LT* prev = pos->prev;
	LT* next = pos->next;

	free(pos);
	pos = NULL;

	prev->next = next;
	next->prev = prev;
}

void ListDestory(LT* phead) {
	assert(phead);

	LT* cur = phead->next;
	while (cur != phead) {
		LT* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}