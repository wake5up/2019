#define _CRT_SECURE_NO_WARNINGS 1
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//3. 输出一个整数的每一位。
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//
//5.写博客总结C语言操作符，博客链接发给我，并分享到群里。

//#include<stdio.h>
//
//int Number1(int n)
//{
//	int k;
//	int count=0;
//	while (n > 0)
//	{
//		k = n % 2;
//		n /= 2;
//		if (1 == k)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int Number2(int n)
//{
//	int count = 0;
//	while (n>0)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >>1 ;
//	}
//	return count;
//}
//
//int Number3(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	printf("请输入一个数:\n");
//	scanf("%d",&n);
//	int ret1=Number1(n);
//	printf("%d\n",ret1);
//	int ret2 = Number2(n);
//	printf("%d\n",ret2);
//	int ret3 = Number3(n);
//	printf("%d\n",ret3);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//
//void Fun(int n)
//{
//	int k, x, y;
//	x = n;
//	y = n>>1;
//	printf("奇数位分别是");
//	while (x > 0)
//	{
//		k = x % 2;
//		x = x >> 2;
//		printf("%d ",k);
//	}
//	printf("偶数位分别是");
//	while (y > 0)
//	{
//		k = y % 2;
//		y = y >> 2;
//		printf("%d ",k);
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	Fun(n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//
//void Fac(int n)
//{
//	if (n > 0)
//	{
//		printf("%d  ", n % 10);
//		Fac(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	Fac(n);
//	system("pause");
//	return 0;
//}

#include<stdio.h>

int TheNumDif(int n, int m)
{
	int sum;
	int count = 0;
	sum = n^m;
	while (sum>0)
		{
			if ((sum & 1) == 1)
			{
				count++;
			}
			sum = sum >>1 ;
		}
	return count;
}
int main()
{
	int n, m;
	printf("请输入需要比较的两个数字:\n");
	scanf("%d%d",&n,&m);
	int ret=TheNumDif(n, m);
	printf("%d",ret);
	system("pause");
	return 0;
}

