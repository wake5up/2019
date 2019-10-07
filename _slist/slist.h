#ifndef _SLIST_H_
#define _SLIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SlistNode* next;
}SListNode;

void SListInit(SListNode** pphead);
void SListDestory(SListNode** pphead);

SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SListNode** pphead, SLTDataType x);
void SListPopFront(SListNode** pphead);
SListNode* SListFind(SListNode* pphead, SLTDataType x); // 在pos的后面进行插入 
void SListInsertAfter(SListNode* pos, SLTDataType x); // 在pos的前面进行插入 
void SListEraseAfter(SListNode* pos);
void SListRemove(SListNode** pphead, SLTDataType x);
void SListRemoveAll(SListNode** pphead, SLTDataType x);
void SListPrint(SListNode* pphead);

#endif