#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char acx[] = "abcdefg";
//	char acy[] = {'a','b','c','d','e','f','g'};
//	printf("%d %d",strlen(acx),strlen(acy));//7 23
//	return 0;
//}


//int main()
//{
//	int s = 0;
//	int n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;//default语句不管出现在什么位置，都与case互斥
//		case 1:s += 1; 
//		case 2:s += 2; //易错点，这里没有break
//		case 3:s += 3;
//		}
//	}
//	printf("%d",s);//24
//	return 0;
//}

//int main()
//{
//	int i = 4;
//	switch (i)
//	{
//	case 1:
//		printf("%s\n", "case 1");
//	default:
//		printf("%s\n", "default");
//	case 2:
//		printf("%s\n", "case 2");
//	case 3:
//		printf("%s\n", "case 3");
//	}
//	return 0;
//}

//int main()
//{
//	char *p = "blue1";
//	char a[] = "blue2";
//	printf("%d %d %d %d",strlen(p),strlen(a),sizeof(p),sizeof(a));//5 5 4 6
//	return 0;
//}

void swapArgs(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//递归快排
void dealQSort(int * arr, int start, int end)//快速排序
{
	int flag = 1;

	if (start >= end)
	{
		return;
	}

	int i = start, j = end;
	while (i < j)
	{
		if (arr[i] > arr[j])
		{
			swapArgs(arr + i, arr + j);
			flag = !flag;
		}

		flag ? j-- : i++;
	}

	dealQSort(arr, start, i - 1);
	dealQSort(arr, i + 1, end);
}
void QSort(int * arr, int n)//调用快排接口
{
	dealQSort(arr, 0, n - 1);
}
//求数组中元素出现次数超过数组长度的一半的数字
int find(int *arr, int n)//先求中位数，再求中位数出现次数有没有超过数组一半
{
	int i = 0;
	int count = 0;
	int len = n / 2;
	for (; i < n; i++)
	{
		if (*(arr + i) == *(arr + len))
		{
			count++;
		}
		if (count > len)
			return *(arr + len);
	}
	return 0;
}
int main()
{
	int arr[] = {1,2,3,2,2,2,5,4,2};
	QSort(arr,sizeof(arr)/sizeof(arr[0]));
	int ret = find(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d",ret);
	return 0;
}