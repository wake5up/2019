//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	while(i<10)
//	{
//		n=(n+2)*2;
//		i++;
//	}
//	printf("%d",n);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int fac(int n)
//{
//	int i=0;
//	while(i<n)
//	{
//		
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	printf("%d",fac(n));
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int panbie(int x, int y)
{
	int i, m, n;
	int a[10] = { 0 };
	for (i = 0; i <5; i++)
	{
		n = x % 10;
		a[n]++;
		x = x / 10;//
	}
	for (i = 0; i <4; i++)
	{
		n = y % 10;
		a[n]++;
		y = y / 10;
	}

	for (i = 0; i <= 9; i++)
	if (a[i] >= 2)
	{
		return 0;
	}
		return 1;

}

int main()
{
	int i, j, f;
	for (i = 10000; i < 100000; i++)
	for (j = 1000; j < 10000; j++)
	{
		if (i == (2 * j))
		{
			f = panbie(i, j);
			if (f == 1)
				printf("%d=2*%d\n", i, j);
		}

	}
	system("pause");
	return 0;
}
