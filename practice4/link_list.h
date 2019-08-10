#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

#include<stdio.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SListInit(SListNode** pphead);

void SListPushFront(SListNode** pphead, SLTDataType x);
void SListPopFront(SListNode** pphead);
SListNode* SListFind(SListNode* pphead, SLTDataType x); 

#endif // !_LINK_LIST_H_
