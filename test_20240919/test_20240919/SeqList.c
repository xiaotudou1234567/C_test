#include "SeqList.h"

void SeqListInit(SL* psl) {
	assert(psl);

	psl->List = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void SeqListDestory(SL* psl) {
	assert(psl);

	if (psl->List != NULL) {
		free(psl->List);
		psl->List = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
}

void CheckCapacity(SL* psl) {
	assert(psl);

	if (psl->size == psl->capacity) {
		int newcapacity = psl->capacity ? 2 * psl->capacity : 4 ;
		Datatype* temp = (Datatype*)realloc(psl->List, newcapacity * sizeof(Datatype));
		if (temp == NULL) {
			perror("realloc fail");
			return ;
		}
		else {
			psl->List = temp;
			psl->capacity = newcapacity;
		}
	}
}

void SeqListPrint(SL* psl) {
	assert(psl);

	for (int i = 0; i < psl->size; i++) {
		printf("%d ", psl->List[i]);
	}
	printf("\n");
}

void SeqListPushback(SL* psl, Datatype num) {
	assert(psl);

	CheckCapacity(psl);
	psl->List[psl->size] = num;
	psl->size++;
}

void SeqListPopback(SL* psl) {
	assert(psl);
	assert(psl->size > 0);

	psl->size--;
}

void SeqListPushFront(SL* psl, Datatype num) {
	assert(psl);

	CheckCapacity(psl);

	int i = psl->size - 1;
	while (i >= 0) {
		psl->List[i + 1] = psl->List[i];
		i--;
	}

	psl->List[0] = num;
	psl->size++;
}

void SeqListPopFront(SL* psl) {
	assert(psl);
	assert(psl->size > 0);

	for (int i = 0; i < psl->size - 1; i++) {
		psl->List[i] = psl->List[i + 1];
	}
	psl->size--;
}

int SeqListFind(SL* psl, Datatype num) {
	assert(psl);

	for (int i = 0; i < psl->size; i++) {
		if (psl->List[i] == num) {
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SL* psl, int pos, Datatype num) {
	assert(psl);
	assert(pos >= 0 && pos <= psl->size - 1);
	CheckCapacity(psl);

	for (int i = psl->size-1; i >= pos; i--) {
		psl->List[i + 1] = psl->List[i];
	}

	psl->List[pos] = num;
	psl->size++;
}

void SeqListErase(SL* psl, int pos) {
	assert(psl);
	assert(psl->size > 0);
	assert(pos >= 0 && pos <= psl->size - 1);

	for (int i = pos; i < psl->size -1; i++) {
		psl->List[i] = psl->List[i+1];
	}

	psl->size--;

}