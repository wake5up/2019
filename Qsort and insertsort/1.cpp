#include<iostream>
using namespace std;
#include<algorithm>

/*
bool compare(int a,int b)
{
	return a<b;
}
int main()
{
	int arr[]={1,2,5,4,3};
	sort(arr,arr+sizeof(arr)/sizeof(arr[0]),compare);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/
/*
void Swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Qsort(int* arr,int left,int right,int len)
{
	if(left>=right)
	{
		return;
	} 
	int flag=1;
	int i=left;
	int j=right;
	while(i<j)
	{
		if(arr[i]>arr[j])
		{
			Swap(arr+i,arr+j); 
			flag=!flag;
		}
		flag?j--:i++;
	}
	Qsort(arr,left,i-1,i-left);
	Qsort(arr,i+1,right,right-i);
}
int main()
{
	int arr[]={1,4,5,6,3};
	Qsort(arr,0,4,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/

void Insertsort(int *arr,int n)
{
	int i=1,j;
	int temp;
	for(int i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i;j>0&&arr[j-1]>temp;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}
}
int main()
{
	int arr[]={1,4,5,6,3};
	Insertsort(arr,5);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}













