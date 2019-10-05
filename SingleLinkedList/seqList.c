#define _CRT_SECURE_NO_WARNINGS 1

#include"seqList.h"

void SeqListInit(SeqList* psl, size_t capacity)
{
	psl-> array = (SLDataType *)calloc(capacity,sizeof(SeqList));
	psl->capicity = capacity;
	psl->size = 0;
}
void SeqListDestory(SeqList* psl)
{
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->capicity = 0;
		psl->size = 0;
	}
}

void CheckCapacity(SeqList* psl)
{
	if (psl->size >= psl->capicity)
	{
		psl->capicity *= 2;
		psl->array = (SLDataType*)realloc(psl->array, psl->capicity*sizeof(SeqList));
	}
}
void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size]=x;
	psl->size++;
}
void SeqListPopBack(SeqList* psl)
{
	psl->size--;
}
void SeqListPushFront(SeqList* psl, SLDataType x)
{
	int i;
	CheckCapacity(psl);
	for (i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}
void SeqListPopFront(SeqList* psl)
{
	int i;
	for (i = 0; i < psl->size-1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}

int SeqListFind(SeqList* psl, SLDataType x)
{
	int i;
	for (i = 0; i < psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return 0;
}
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{
	if (pos >= psl->size)
	{
		return;
	}
	CheckCapacity(psl);
	int i;
	for (i = psl->size - 1; i >= pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}
void SeqListErase(SeqList* psl, size_t pos)
{
	int i;
	for (i = pos; i <psl->size-1; i++)
	{
		psl->array[i] = psl->array[i+1];
	}
	psl->size--;
}
void SeqListRemove(SeqList* psl, SLDataType x)
{
	int i=psl->size-1;
	do
	{
		if (psl->array[i] == x)
		{
			SeqListErase(psl, i);
			
		}
	} while (i--);
}
void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	psl->array[pos] = x;
}
void SeqListPrint(SeqList* psl)
{
	int i;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d ",psl->array[i]);
	}
	printf("\n");
}
void SeqListBubbleSort(SeqList* psl)
{
	int i, j;
	SLDataType temp;
	for (i = 0; i < psl->size - 1; i++)
	{
		for (j = 0; j < psl->size - 1 - i; j++)
		{
			if (psl->array[j]>psl->array[j + 1])
			{
				temp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = temp;
			}
		}
	}
}
int SeqListBinaryFind(SeqList* psl, SLDataType x)
{
	SeqListBubbleSort(psl);
	int left = 0;
	int right = psl->size - 1;
	int mid;
	while (left < right)
	{
		mid = ((right - left) >> 1) + left;
		if (psl->array[mid]>x)
		{
			right = mid-1;
		}
		else if (psl->array[mid] < x)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
