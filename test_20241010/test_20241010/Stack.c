#include "Stack.h"

// 初始化栈 
void StackInit(Stack* ps) {
	assert(ps);

	ps->_a = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}
// 入栈 
void StackPush(Stack* ps, STDataType data) {
	assert(ps);

	if (ps->_top == ps->_capacity) {
		int newcapacity = ps->_capacity ? 2 * ps->_capacity : 4;
		STDataType* temp = (STDataType*)realloc(ps->_a, newcapacity * sizeof(STDataType));
		if (temp == NULL) {
			perror("realloc fail");
			exit(-1);
		}
		else {
			ps->_a = temp;
			ps->_capacity = newcapacity;
		}
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}
// 出栈 
void StackPop(Stack* ps) {
	assert(ps);
	assert(ps->_top > 0);

	ps->_top--;
}
// 获取栈顶元素 
STDataType StackTop(Stack* ps) {
	assert(ps);
	assert(ps->_top > 0);

	return ps->_a[ps->_top-1];
}
// 获取栈中有效元素个数 
int StackSize(Stack* ps) {
	assert(ps);
	return ps->_top;
}
// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps) {
	assert(ps);
	return ps->_top ? 0 : 1;
}
// 销毁栈 
void StackDestroy(Stack* ps) {
	free(ps->_a);
	ps->_a = NULL;

	ps->_capacity = 0;
	ps->_top = 0;

}