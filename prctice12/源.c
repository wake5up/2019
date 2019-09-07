#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])

void find_num(int *arr, int len,int *num1,int *num2)
{
	int i;
	int sum = 0;
	for (i = 0; i < len; i++)
	{
		sum^=*(arr + i);
	}
	int j;
	for (j = 0; j < sizeof(int)* 8; j++)
	{
		if (((sum >> j) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (((*(arr + i) >> j) & 1) == 1)
		{
			*num1 ^= (*(arr + i));
		}
		else
		{
			*num2 ^= (*(arr + i));
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 9 };
	int num1=0, num2=0;
	find_num(arr,SIZE(arr),&num1,&num2);
	printf("%d %d", num1, num2);
	return 0;
}
