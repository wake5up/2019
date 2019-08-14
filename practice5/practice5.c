#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;//这属于赋值，a=c,c=c+1,b=b+1
//	return (a);
//}
//
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n",k);//4
//	return 0;
//}


//int x = 3;//全局变量
//void inc()
//{
//	static int x = 1;//局部变量
//	x *= (x+1);
//	printf("%d",x);
//	return;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		inc();
//	}
//	return 0;
//}

//int main()
//{
//	int n, m;
//	for (m = 0, n = -1; n = 0; m++, n++)//第二个条件n赋值为0，直接跳过，不循环
//	{
//		n++;
//		printf("%d %d",m,n);
//	}
//	return 0;
//}


int main()
{
	int i = 0, j = 0;
	if (++i > 0 || ++j > 0)//后半部分不执行了
	{
		printf("i=%d,j=%d",i,j);
	}
	return 0;
}