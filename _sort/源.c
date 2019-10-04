#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

#define Q_INSERT 8
#define SIZE(arr) sizeof(arr)/sizeof(arr[0])


void insertsort(int* arr, int len)
{
	int i;
	int j;
	int temp;
	for (i = 0; i<len; i++)
	{
		temp = arr[i];
		for (j = i; j>0 && arr[j - 1]>temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

void Swap(int *left, int *right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}
void ShellSort(int *arr, int len)
{
	int i, j;
	int gap = len / 2;
	for (; gap>0; gap /= 2)
	{
		for (i = 0; i<(len-gap); i++)
		{
			j = i + gap;
			if (arr[i]>arr[j])
			{
				Swap(&arr[i], &arr[j]);
			}
		}
	}
}

void BubbleSort(int *arr, int len)
{
	int i, j;
	int k = 1;
	for (i = 0; i < len; i++)
	{

		for (j = 0; j < len - k; j++)
		{
			if (arr[j]>arr[j + 1])
				Swap(&arr[j],&arr[j+1]);
		}
		k += 1;
	}
}

void QSort(int *arr, int start,int end)
{
	int i, j;
	int flag = 1;
	if (start > end)
	{
		return;
	}
	i = start;
	j = end;
	while (i<j)
	{
		if (arr[i] > arr[j])
		{
			Swap(&arr[i],&arr[j]);
			flag = !flag;
		}
		flag ? j-- : i++;
	}
	QSort(arr,start,i-1);
	QSort(arr, i + 1, end);
}

int Partition(int *arr, int start, int end)//三数取中法
{
	int mid = (end - start) >> 1 + start;
	if (arr[start] > arr[mid])
	{
		Swap(arr + start, arr + mid);
	}
	if (arr[mid] > arr[end])
	{
		Swap(arr+mid,arr+end);
	}
	if (arr[start] > arr[mid])
	{
		Swap(arr + start, arr + mid);
	}
	Swap(arr+mid,arr+end-1);

	int i = start + 1;
	int j = end - 2;
	while (i < j)
	{
		while (arr[i] < arr[end - 1])
		{
			i++;
		}
		if (i!=j)
		{
			while (arr[j]>arr[end - 1])
			{
				j--;
			}
			Swap(arr + i, arr + j);
		}
		
	}
	Swap(arr + i, arr + end - 1);
	printf("%d\n", i);
	return i;
	
}

void HQSort(int *arr, int start, int end)
{
	int midValue = Partition(arr, start, end);
	if (end - start > Q_INSERT)
	{
		QSort(arr, start, midValue - 1);
		QSort(arr, midValue + 1, end);
	}
	else
	{
		insertsort(arr, end - start + 1);
	}
}

void dealmergesort(int *arr, int *temp, int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int mid = (end+start)/2;
	dealmergesort(arr,temp,start,mid);
	dealmergesort(arr,temp,mid+1,end);

	int i = start;
	int j = mid+1;
	int k = i;
	for (; i <= mid&&j <= end;k++)
	{
		if (arr[i]>=arr[j])
		{
			temp[k] = arr[j];
			j++;
			
		}
		else
		{
			temp[k] = arr[i];
			i++;
		}
	}
	for (; i <= mid; i++, k++)
	{
		temp[k] = arr[i];
	}
	for (; j <= end; j++, k++)
	{
		temp[k] = arr[j];
	}
	int g;
	for (g = 0; g < end - start + 1; g++)
	{
		arr[g] = temp[g];
	}
}
void mergesort(int *arr, int len)
{
	int *temp = (int *)malloc(sizeof(int)*len);
	dealmergesort(arr,temp,0,len-1);
	free(temp);
}
void PrintfFun(int *arr, int len)
{
	int i;
	for (i = 0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int i;
	int arr[] = { 1, 2, 5, 3, 8, 6, 0, 5,9,7 };
	//  insertsort(arr,SIZE(arr));
	//ShellSort(arr, SIZE(arr));
	//BubbleSort(arr, SIZE(arr));
	//QSort(arr,0,SIZE(arr));
	//HQSort(arr, 0,SIZE(arr));
	mergesort(arr, SIZE(arr)-1);
	PrintfFun(arr, sizeof(arr) / sizeof(sizeof(arr[0])));
	return 0;
}
