#define _CRT_SECURE_NO_WARNINGS 1

#include"slist.h"

void SListInit(SListNode** pphead)
{
	*pphead = NULL;
}

void SListDestory(SListNode** pphead)
{
	if (*pphead==NULL)
	{
		return;
	}
	else
	{
		while ((*pphead)->next)
		{
			SListEraseAfter(*pphead);
		}
		free(*pphead);
		*pphead = NULL;
	}
}

SListNode* BuySListNode(SLTDataType x)
{
	SListNode* ret = (SListNode*)malloc(sizeof(SListNode));
	ret->data = x;
	ret->next = NULL;
	return ret;
}
void SListPushFront(SListNode** pphead, SLTDataType x)
{
	SListNode* temp = BuySListNode(x);
	temp->next = *pphead;
	*pphead = temp;
}
void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	SListNode* temp = (*pphead)->next;
	free(*pphead);
	*pphead = temp;
}
SListNode* SListFind(SListNode* pphead, SLTDataType x) // 找x数据 
{
	SListNode* temp = pphead;
	for (; temp->next; temp = temp->next)
	{
		if (temp->data == x)
		{
			return temp;
		}
		return NULL;
	}
}
void SListInsertAfter(SListNode* pos, SLTDataType x)// 在pos的后面进行插入 
{
	SListNode* temp = BuySListNode(x);
	temp->next = pos->next;
	pos->next=temp;
}
void SListEraseAfter(SListNode* pos)
{
	SListNode* temp = pos->next;
	if (temp == NULL)
	{
		return;
	}
	pos->next = temp->next;
	free(temp);
}
void SListRemove(SListNode** pphead, SLTDataType x)
{
	SListNode* temp;
	if (*pphead &&*pphead == x)
	{
		SListPopFront(*pphead);
	}
	else
	{
		for (temp = *pphead; temp->next;)
		{
			if (temp->next = x)
			{
				SListEraseAfter(temp);
				return;
			}
			else
			{
				temp = temp->next;
			}
		}
	}
}
void SListRemoveAll(SListNode** pphead, SLTDataType x)
{
	SListNode* temp;
	if (*pphead &&*pphead == x)
	{
		SListPopFront(*pphead);
	}
	else
	{
		for (temp = *pphead; temp->next;temp=temp->next)
		{
			if (temp->next = x)
			{
				SListEraseAfter(temp);
				return;
			}
		}
	}
}
void SListPrint(SListNode* pphead)
{
	SListNode* cur;
	printf("pphead->");
	for (cur = pphead; cur; cur = cur->next)
	{
		printf("%d->", cur->data);
	}
	printf("NULL\n");
}

