#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<algorithm>
#include<cstdlib>

bool compare(int a, int b)
{
	return a < b;
}

int main()
{
	int n;
	cin >> n;
	int a[200];
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a,a+n,compare);
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	return 0;
}
#if 0
int compare(const void* a, const void* b)
{
	return *(int *)a - *(int *)b;
}
int main()
{
	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	qsort(a,n,sizeof(int),compare);
	/*for (int i = 0; i < n; i++)
		cout << a[i]<<" ";*/
	for (auto e : a)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}
#endif