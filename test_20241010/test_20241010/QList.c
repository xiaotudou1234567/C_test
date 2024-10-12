#include "QList.h"

void QueueInit(Queue* q) {
	assert(q);

	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}

void QueuePush(Queue* q, QListData x) {
	assert(q);

	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	else {
		newnode->data = x;
		newnode->next = NULL;
	}
	
	if (q->head == NULL) {
		q->head = newnode;
	}
	else {
		q->tail->next = newnode;
	}
	q->tail = newnode;
	q->size++;
}

void QueuePop(Queue* q) {
	assert(q);
	assert(q->head != NULL);

	QNode* newhead = q->head->next;
	free(q->head);
	q->head = newhead;
	if (q->head == NULL) {
		q->tail = NULL;
	}
	q->size--;
}

QListData QueueFront(Queue* q) {
	assert(q);
	assert(q->head != NULL);

	return q->head->data;
}

QListData QueueBack(Queue* q) {
	assert(q);
	assert(q->tail != NULL);

	return q->tail->data;
}

int QueueSize(Queue* q) {
	assert(q);
	return q->size;
}

int QueueEmpty(Queue* q) {
	return q->size == 0 ? 1 : 0;
}

void QueueDestory(Queue* q) {
	QNode* cur = q->head;

	while (cur) {
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	q->head = NULL;
	q->tail = NULL;
	q->size = 0;
}