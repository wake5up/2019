//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//2.使用函数实现两个数的交换。
//
//3.实现一个函数判断year是不是润年。
//
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//5.实现一个函数，判断一个数是不是素数。

//#include<stdio.h>
//int Cheng(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%d=%d", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("请输入需要的乘法口诀表数字:\n");
//	scanf("%d",&n);
//	Cheng(n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int swap(int n, int m)
//{
//	int tmp;
//	tmp = n;
//	n = m;
//	m = tmp;
//	printf("%d %d",n,m);
//}
//int main()
//{
//	int n, m;
//	printf("请输入需要交换的两个数字:\n");
//	scanf("%d%d",&n,&m);
//	swap(n,m);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int year(int n)
//{
//	if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	printf("请输入需要判断是否为闰年的年份:\n");
//	scanf("%d",&n);
//	if (year(n) == 1)
//		printf("%d年是闰年\n",n);
//	else
//		printf("%d年不是闰年\n",n);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("*********0.初始化数组**********\n");
//	printf("*********1.清空数组************\n");
//	printf("*********2.数组元素逆序********\n");
//	printf("*******************************\n");
//}
//int init(int n,int a[5])
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//
//}
//int empty(int n,int a[5])
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = NULL;
//	}
//}
//int reverse(int n, int a[5])
//{
//	int i;
//	for (i = 4; i >=0; i--)
//	{
//		printf("%d  ",a[i]);
//	}
//}
//int main()
//{
//	int n=0;
//	int a[5] = {1,2,3,4,5};
//	while (1)
//	{
//		menu();
//		printf("请输入数字:\n");
//		scanf("%d",&n);
//		if (n == 0)
//			init(n,a);
//		else if (n == 1)
//			empty(n,a);
//		else if (n == 2)
//			reverse(n,a);
//		else
//			printf("请输入正确的数字！\n");
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
	int i;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	if (i>sqrt(n))
	return 1;
}
int main()
{
	int n;
	printf("请输入需要判断素数的数字:\n");
	scanf("%d",&n);
	if (is_prime(n) == 1)
		printf("%d是素数\n", n);
	else
		printf("%d不是素数\n",n);
	system("pause");
	return 0;
}
