#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
<<<<<<< HEAD
#include<string.h>

//int fib(int n)
//{
//	int a1 = 1;
//	int a2 = 1;
//	int tmp = 0;
//	int count = 2;
//	if (n < 3)
//	{
//		return 1;
//	}
//	while (count++<n)
//	{
//		tmp = a1 + a2;
//		a1 = a2;
//		a2 = tmp;
//	}
//	return tmp;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=fib(n);
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	int x, y, z;
//	x = z = 2, y = 3;
//	if (x > y)
//	{
//		z = 1;
//	}
//	else if (x == y)
//	{
//		z = 0;
//	}
//	else
//	{
//		z = -1;
//	}
//	printf("%d",z);
//	return 0;
//}

//int main()
//{
//	char achello[] = "hello\0world";
//	char acnew[15] = {0};
//	strcpy(acnew, achello);
//	printf("%d,%d",strlen(acnew),sizeof(achello));//5,12
//}

//int fun(int x, int y)
//{
//	static int m = 0;//静态变量
//	static int i = 2;//静态变量
//	i += m + 1;//3 12
//	m = i + x + y;//8 17
//	return m;
//}
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j,m);
//	printf("%d",k);//8
//	k = fun(j,m);
//	printf("%d",k);//17
//	return 0;
//}

//int main()//unsigned int 二进制数字中有多少个1
//{
//	unsigned int n;
//	scanf("%d",&n);
//	int count = 0;
//	int num = 32;
//	while (num--)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n>>1;
//	}
//	printf("%d",count);
//	return 0;
//}
=======

int fib(int n)
{
	int a1 = 1;
	int a2 = 1;
	int tmp = 0;
	int count = 2;
	if (n < 3)
	{
		return 1;
	}
	while (count++<n)
	{
		tmp = a1 + a2;
		a1 = a2;
		a2 = tmp;
	}
	return tmp;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret=fib(n);
	printf("%d",ret);
	return 0;
}
>>>>>>> 4ef19d58289787bcf20cbc3d8f9c81f217515c79
