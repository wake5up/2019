#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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