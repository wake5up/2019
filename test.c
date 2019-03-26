#include<stdio.h>
int binary_search(int arr[], int k, int left, int right)//二分法
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("输入需要找到数字\n");
	scanf("%d",&k);
	int ret = binary_search(arr, k, left, right);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是:%d\n", ret);
	}
	//int mid = (left+right)/2;
	system("pause");
	return 0;
}
//int main()//大小写互换
//{
//	char num;
//	while (scanf("%c", &num) == 1)
//	{
//		if ((num >= 65) && (num <= 90))
//		{
//			num = num + 32;
//			printf("%c\n", num);
//		}
//		else if ((num >= 97) && (num <= 122))
//		{
//			num = num - 32;
//			printf("%c\n", num);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}
