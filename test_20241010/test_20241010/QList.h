#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

typedef int QListData;

typedef struct QListNode {
	struct QListNode* next;
	QListData data;
}QNode;

typedef struct Queue {
	QNode* head;
	QNode* tail;
	int size;
}Queue;

void QueueInit(Queue* q);
void QueuePush(Queue* q, QListData x);
void QueuePop(Queue* q);
QListData QueueFront(Queue* q);
QListData QueueBack(Queue* q);
int QueueSize(Queue* q);
int QueueEmpty(Queue* q);
void QueueDestory(Queue* q);