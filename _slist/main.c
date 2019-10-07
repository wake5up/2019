#define _CRT_SECURE_NO_WARNINGS 1

#include"slist.h"

int main()//≤‚ ‘
{
	SListNode *phead;

	SListInit(&phead);
	SListPushFront(&phead, 8);
	SListPushFront(&phead, 7);
	SListPushFront(&phead, 6);
	SListPushFront(&phead, 4);
	SListPushFront(&phead, 4);
	SListPushFront(&phead, 4);
	SListPushFront(&phead, 2);
	SListPushFront(&phead, 1);
	SListPrint(phead);
	SListPopFront(&phead);
	SListPrint(phead);
	
	SListInsertAfter(SListFind(phead, 6), 9);
	SListEraseAfter(SListFind(phead, 4),8);
	SListRemove(&phead, 7);
	SListPrint(phead);
		//SListRemoveAll(&phead, 8);
	SListDestory(&phead);
	
	//SListDestory(&phead);
	return 0;
}