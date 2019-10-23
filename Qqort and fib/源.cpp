#define _CRT_SECURE_NO_WARNINGS 1



#if 0
void swap(int *left, int *right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}
void QSort(int* arr,int left,int right)
{
	int flag = 1;
	
	if (left >= right)
	{
		return;
	}
	int i = left;
	int j = right;
	while (i < j)
	{
		if (arr[i]>arr[j])
		{
			swap(arr+i,arr+j);
			flag = !flag;
		}
		flag ? j-- : i++;
	}
	QSort(arr,left,i-1);
	QSort(arr, i + 1, right);
}

int main()
{
	int arr[] = {1,2,5,4,6,5,2,0};
	QSort(arr,0,7);
	for (auto e : arr)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}
#endif

#include<iostream>
using namespace std;

int fib(int n)
{
	int a1, a2;
	int sum = 0;
	if (n == 1 || n == 2)
	{
		sum = 1;
	}
	a1 = 1;
	a2 = 1;
	while (n>2)
	{
		sum = (a1 + a2)%10007;
		a1 = a2;
		a2 = sum;
		n--;
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	int ret = fib(n);
	cout << ret;
	return 0;
}

