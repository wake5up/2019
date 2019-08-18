#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void Func(char str_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	//sizeof 是可用来计算字符串的总长度，包括\0，而strlen计算不包含\0的字符串的长度。
//	//当数组作为函数的参数时，其自动转换为指向函数的指针，sizeof（str_arg）表示的是指针的长度，在32为计算机上为4位。
//	printf("%d",m);//4
//	//strlen只是对传递给Func 函数的那个字符串求长度，跟str_arg中的那个2 是没有任何关系的， 即使把2 改为200 也是不影响输出结果的
//	printf("%d",n);//5 
//}
//int main()
//{
//	char str[] = "hello";
//	Func(str);
//	return 0;
//}

//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d ",a,x);
//    	return 0;
//}

//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int* p1 = (int *)(&a+1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int *)(a + 1);
//	printf("%d %x %d",p1[-1],p2[0],p3[1]);
//	return 0;
//}

//间接修改const定义的值
//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = 1;
//	printf("%d,%d",i,*j);
//	return 0;
//}

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])
int MaxSubarr(int *a, int n)
{
	int sum = 0;
	int subsum = -100000;
	int i = 0;
	for (; i < n; i++)
	{
		sum += *(a + i);
		if (sum >= subsum)
		{
			subsum = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	return subsum;
}

int main()
{
	int arr[] = {1,-2,3,10,-4,7,2,-5};
	int ret=MaxSubarr(arr, SIZE(arr));
	printf("%d",ret);
	return 0;
}