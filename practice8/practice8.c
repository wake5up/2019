#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[] = {6,7,8,9,10};
//	int *ptr = arr;//*ptr=6
//	*(ptr++) += 123;//*ptr=7   并把a[0]赋值为129
//	printf("%d,%d",*ptr,*(++ptr));//先算 ++ptr  *ptr=8   8,8
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char *b = (char *)&a;
//	printf("%08x,%08x",i,*b);
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 012;//y=10
//	printf("%d",y*x++);//y*x   x++
//	return 0;
//}

//int main()
//{
//	unsigned short sht = 0;//两字节，10个比特位
//	sht--;
//	printf("%d",sht);//65535,即1111 1111 1111 1111
//	return 0;
//}

//int main()
//{
//	int i;
//	char acNew[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//到处都是'\0'符号
//	for (i = 0; i < 10; i++)
//	{
//		acNew[i] = '0';
//	}
//	printf("%d\n",strlen(acNew));//10 如果未向acNew中赋初值，则不确定，因为不知道‘\0’在什么时候出现
//	return 0;
//}

//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//void main()
//{
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
//	foo(a);
//	printf("%d",a[2][1]);//9
//	return 0;
//}

int main()
{
	int a, b;
	int c = (a=2,b=5,a++,b++,a+b);
	printf("%d",c);//9
	return 0;
}