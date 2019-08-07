#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int search(int *arr,int k)//求数组k个元素前的最小值
{
	k = k - 1;
	int num = *arr;
	while (k--)
	{
		if (num < *(arr + 1))
		{
			num = num;
			arr++;
		}
		else
		{
			num = *(arr + 1);
			arr++;
		}
	}
	return num;
}
int main()
{
	int arr[] = {4,2,3,56,3,3,77,9};
	int ret=search(&arr, 5);
	printf("%d",ret);
	return 0;
}
