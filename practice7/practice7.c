#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void Func(char str_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	//sizeof �ǿ����������ַ������ܳ��ȣ�����\0����strlen���㲻����\0���ַ����ĳ��ȡ�
//	//��������Ϊ�����Ĳ���ʱ�����Զ�ת��Ϊָ������ָ�룬sizeof��str_arg����ʾ����ָ��ĳ��ȣ���32Ϊ�������Ϊ4λ��
//	printf("%d",m);//4
//	//strlenֻ�ǶԴ��ݸ�Func �������Ǹ��ַ����󳤶ȣ���str_arg�е��Ǹ�2 ��û���κι�ϵ�ģ� ��ʹ��2 ��Ϊ200 Ҳ�ǲ�Ӱ����������
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

//����޸�const�����ֵ
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