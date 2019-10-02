#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

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
	int arr[] = { 1, 2, 5, 3, 8, 6, 0, 5 };
	//  insertsort(arr,sizeof(arr)/sizeof(arr[0]));
	//ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintfFun(arr, sizeof(arr) / sizeof(sizeof(arr[0])));
	return 0;
}
