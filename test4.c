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
int main()
{
	int i,j,k=0,n=0;
	int flag[9]={1,2,3,4,5,6,7,8,9};
	for(i=5000;i<10000;i++)
	{
		j=i*2;
		if(j>=10000&&j<=99999)
		{
			while(i>0)
			{
			k=i%10;
			i=i/10;
			for(i=0;i<4;i++)
			{
				flag[i]==k;
				n++;
			}
			if(n>1)
			{
				break;
			}
			}
			while(j>0)
			{
				k=j%10;
				j=j/10;
				for(i=4;i<9;i++)
				{
					flag[i]=k;
					n++;
				}
				if(n>1)
				{
					break;
				}
			}
		}
	}
	if(n!=2)
		printf("%d%d",i,j);
	system("pause");
	return 0;
}
