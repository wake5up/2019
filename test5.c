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


/*public class GradeExam 
{
    public static void main(String[] args) 
    {
        char[][] answers = {
            {'A','B','A','C','C','D','E','E','A','D'},
            {'D','B','A','B','C','A','E','E','A','D'},
            {'E','D','D','A','C','B','E','E','A','D'},
            {'C','B','A','E','D','C','E','E','A','D'},
            {'A','B','D','C','C','D','E','E','A','D'},
            {'B','B','E','C','C','D','E','E','A','D'},
            {'B','B','A','C','C','D','E','E','A','D'},
            {'E','B','E','C','C','D','E','E','A','D'},
            };
        char[] keys = {'D','B','D','C','C','D','A','E','A','D'};
        int k=0;
        int[] a=new int [8];
        for(int i=0;i<answers.length;i++)
        {
            int j=0;
            for(j=0;j<answers[i].length;j++)
            {
                if(answers[i][j]==keys[j])
                //correctCount++;
                 a[i]++;
            }
        }
        int[] b=new int [a.length];
        int i=0;
        int j=0;
        for(i=0;i<a.length;i++)
        {
            b[i]=a[i];
        }
        java.util.Arrays.sort(a);
        for(i=a.length-1;i>=0;i--)
            for(j=0;j<a.length;j++)
            {
                if(a[i]==b[j])
                {
                    System.out.println("Student"+j+"'s correct count is"+a[i]);
                    break;
                }
            }
    }
    
}*/error

public class GradeExam 
{
    public static void main(String[] args) 
    {
        char[][] answers = {
            {'A','B','A','C','C','D','E','E','A','D'},
            {'D','B','A','B','C','A','E','E','A','D'},
            {'E','D','D','A','C','B','E','E','A','D'},
            {'C','B','A','E','D','C','E','E','A','D'},
            {'A','B','D','C','C','D','E','E','A','D'},
            {'B','B','E','C','C','D','E','E','A','D'},
            {'B','B','A','C','C','D','E','E','A','D'},
            {'E','B','E','C','C','D','E','E','A','D'},
            };
        char[] keys = {'D','B','D','C','C','D','A','E','A','D'};
        int k=0;
        int[] a=new int [8];
        for(int i=0;i<answers.length;i++)
        {
            int j=0;
            for(j=0;j<answers[i].length;j++)
            {
                if(answers[i][j]==keys[j])
                //correctCount++;
                 a[i]++;
            }
        }
        int[] b=new int [a.length];
        int i=0;
        int j=0;
        for(i=0;i<a.length;i++)
        {
            b[i]=a[i];
        }
        java.util.Arrays.sort(a);
        for(i=a.length-1;i>=0;i--)
            for(j=0;j<a.length;j++)
            {
                if(a[i]==b[j])
                {
                    System.out.println("Student"+j+"'s correct count is"+a[i]);
                    break;
                }
            }
    }
    
}
