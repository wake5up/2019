#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

int main()
{
	Stack s;
	StackInit(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	StackPush(&s, 6);
	StackPush(&s, 7);
	StackPush(&s, 8);
	PrintfStack(&s);
	StackPop(&s);
	StackPop(&s);
	StackPop(&s);
	//StackPop(&s);
	//StackPop(&s);
	//StackPop(&s);
	PrintfStack(&s);
	StackIsEmpty(&s) ? printf("Îª¿Õ") : printf("·Ç¿Õ");
	StackDestory(&s);
	PrintfStack(&s);
	return 0;
}