#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType *array;
	size_t size;
	size_t capicity;
}SeqList;

void SeqListInit(SeqList* psl, size_t capacity);
void SeqListDestory(SeqList* psl);

void CheckCapacity(SeqList* psl);
void SeqListPushBack(SeqList* psl, SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl, SLDataType x);
void SeqListPopFront(SeqList* psl);

int SeqListFind(SeqList* psl, SLDataType x);
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);
void SeqListErase(SeqList* psl, size_t pos);
void SeqListRemove(SeqList* psl, SLDataType x);
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);
void SeqListPrint(SeqList* psl);

void SeqListBubbleSort(SeqList* psl);
int SeqListBinaryFind(SeqList* psl, SLDataType x); // 本题要求：时间复杂度：O(N) 空间复杂度 O(1) 

#endif