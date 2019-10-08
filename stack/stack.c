#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

void StackInit(Stack* psl, size_t capacity)
{
	psl->array = (STDataType*)calloc(capacity,sizeof(STDataType));
	psl->capacity = capacity;
	psl->size = 0;
}
void StackDestory(Stack* psl)
{
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->capacity = 0;
		psl->size = 0;
	}
}

void CheckCapacity(Stack* psl)
{
	if (psl->size >= psl->capacity)
	{
		psl->capacity *= 2;
		psl->array = (STDataType*)realloc(psl->array,psl->capacity*sizeof(STDataType));
	}
}
void StackPush(Stack* psl, STDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
void StackPop(Stack* psl)
{
	if (psl->size == 0)
	{
		return;
	}
	psl->size--;
}

STDataType StackTop(Stack* psl)
{
	if (psl->size == 0)
	{
		return (STDataType)0;
	}
	return psl->array[psl->size-1];
}
int StackIsEmpty(Stack* psl)
{
	return psl->size == 0;
}
void PrintfStack(Stack* psl)
{
	int i;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->array[i]);
	}
	printf("\n");
}