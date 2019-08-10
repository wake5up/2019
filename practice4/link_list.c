#define _CRT_SECURE_NO_WARNINGS 1

#include"link_list.h"

void SListInit(SListNode** pphead, SLTDataType x)
{
	SListNode* phead = (SListNode*)malloc(sizeof(SListNode));
	phead->data = x;
	phead->next = NULL;
}

void SListPushFront(SListNode** pphead, SLTDataType x)
{
	SListNode *phead;
	SListInit(&phead,x);

}
void SListPopFront(SListNode** pphead);
SListNode* SListFind(SListNode* pphead, SLTDataType x); 