#ifndef _STACK_H_
#define _STACK_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* array;
	size_t size;
	size_t capacity;
}Stack;

void StackInit(Stack* psl, size_t capacity);
void StackDestory(Stack* psl);

void CheckCapacity(Stack* psl);
void StackPush(Stack* psl, STDataType x);
void StackPop(Stack* psl);

STDataType StackFront(Stack* psl);
int StackIsEmpty(Stack* psl);

void PrintfStack(Stack* psl);

#endif