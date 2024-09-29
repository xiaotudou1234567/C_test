#include "SList.h"

SList* CreatSListNode(SListDatatype num) {
	SList* newcode = (SList*)malloc(sizeof(SList));

	if (newcode == NULL) {
		exit(-1);
	}
	else {
		newcode->num = num;
		newcode->next = NULL;
		return newcode;
	}
}

void PrintSList(SList* phead) {
	SList* tail = phead;

	while (tail != NULL) {
		printf("%d->", tail->num);
		tail = tail->next;
	}
	printf("NULL\n");
}

void SListPushBack(SList** pphead, SListDatatype num) {
	SList* newcode = CreatSListNode(num);

	if (*pphead == NULL) {
		*pphead = newcode;
	}
	else {
		SList* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newcode;
	}
}

void SListPopBack(SList** pphead) {
	assert(*pphead);

	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SList* tail = *pphead;
		while (tail->next->next != NULL) {
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SListPushFront(SList** pphead, SListDatatype num) {
	SList* newcode = CreatSListNode(num);

	SList* temp = *pphead;
	*pphead = newcode;
	newcode->next = temp;
}

void SListPopFront(SList** pphead) {
	assert(*pphead);

	SList* temp = (*pphead)->next;
	free(*pphead);
	*pphead = temp;
}

SList* SListFind(SList* phead, SListDatatype num) {
	assert(phead);

	SList* cur = phead;
	while (cur != NULL) {
		if (cur->num == num) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListInsert(SList** pphead, SList* pos, SListDatatype num) {
	assert(pphead && (*pphead) && pos);

	if (pos == (*pphead)) {
		SListPushFront(pphead,num);
	}
	else {
		SList* cur = *pphead;
		while (cur != NULL) {
			if (cur->next == pos) {
				SList* newnode = CreatSListNode(num);
				cur->next = newnode;
				newnode->next = pos;
				break;
			}
			cur = cur->next;
		}
	}
}

void SListErase(SList** pphead, SList* pos) {
	assert(pphead && (*pphead) && pos);

	if (pos == (*pphead)) {
		(*pphead) = pos->next;
		free(pos);
	}
	else {
		SList* cur = *pphead;
		while (cur != NULL) {
			if (cur->next == pos) {
				cur->next = pos->next;
				free(pos);
				break;
			}
			cur = cur->next;
		}
	}
}