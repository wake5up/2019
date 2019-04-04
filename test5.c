import java.util.Scanner;

public class Sum 
{
    public static void main(String[] args) 
    {
        System.out.print("请输入矩阵的行列:");
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        double[][] m=new double[n][n];
        System.out.println("请输入数组元素:");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m [i][j]=input.nextDouble();
            }
        }
        System.out.print("数组的主对角线元素和为"+sumMajorDigonal(m));
    }
    public static double sumMajorDigonal(double[][] m)
    {
        double sum=0;
        for(int i=0;i<m.length;i++)
        {
            sum=sum+m[i][i];
        }
        return sum;
    }   
}


#include<stdio.h>
#include<stdlib.h>

int Fac(int n, int a[10])//创建异或函数
{
	//相等的数字异或之后就成0了
	int temp = 0;//必须先初始化0，或a[0]
	int i;
	for (i = 0; i < n; i++)
	{
		temp ^= a[i];
	}
	return temp;
}
int main()
{
	int i, n;
	int ret;
	int a[10];
	printf("请输入数组个数:\n");
	scanf("%d",&n);
	printf("请输入数组元素:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	ret = Fac(n, a);
	printf("%d",ret);
	system("pause");
	return 0;
}
