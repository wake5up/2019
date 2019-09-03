#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void fun1()
{
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d\n",a);
}
int fun2(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);
	}
	return count;

}
int main()
{
	//fun1();//4
	//printf("%d",fun2(2019));//8

	return 0;
}