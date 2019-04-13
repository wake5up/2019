import java.util.Scanner;

public class Grade 
{
    public static void main(String[] args) 
    {
        System.out.print("请输入学生人数:");
        Scanner input=new Scanner(System.in);
        int ren=input.nextInt();
        System.out.print("请输入学生的成绩:");
         double[] student=new double[ren]; 
        for(int i=0;i<ren;i++)
        {
            student[i]=input.nextDouble();
        }
        fac(ren,student);
        
    }
    public static void fac(int ren,double[] student)
    {
        double best=max(ren,student);
        for(int i=0;i<ren;i++)
        {
            if(student[i]>=best-10)
            System.out.println("Student"+i+"score is"+student[i]+"and grade is "+"A");
            else if(student[i]>=best-20)
            System.out.println("Student"+i+"score is"+student[i]+"and grade is "+"B");
            else if(student[i]>=best-30)
            System.out.println("Student"+i+"score is"+student[i]+"and grade is "+"C");
            else if(student[i]>=best-40)
            System.out.println("Student"+i+"score is"+student[i]+"and grade is "+"D");
            else if(student[i]<best-40)
            System.out.println("Student"+i+"score is"+student[i]+"and grade is "+"F");
        }
    }
    public static double max(int ren,double[] student)
    {
        double max=student[0];
        for(int i=1;i<ren;i++)
        {
            if(max>student[i])
                max=max;
            else
                max=student[i];
        }
        return max;
    }
}



import java.util.Scanner;

public class San 
{
    public static void main(String[] args) 
    {
        System.out.println("请输入一个点的坐标:");
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        if(a*a+b*b<10*10)
        {
            System.out.print("该点坐标在圆内");
        }
        else
        {
            System.out.print("该点坐标不在圆内");
        }
    } 
}



import java.util.Scanner;

public class Sjfjiooe
{
    public static void main(String[] args) 
    {
        System.out.println("请输入需要素数个数的范围:");
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        System.out.print(n+"范围内的素数个数是"+isPrime(n));
    }
    public static int isPrime(int n)//使用sumDighits方法
    {
       int count=0;int j=0;//各个数字之和
       for(int i=2;i<n;i++)
       {
           for(j=2;j<Math.sqrt(i);j++)
           {
               if(i%j==0)
                   break;
           }
           if(j>Math.sqrt(i))
           count++;
       }
        return count;
    }
}

import java.util.Scanner;



public class Sjfjiooe

{

    public static void main(String[] args) 

    {

        System.out.println("请输入需要素数个数的范围:");

        Scanner input=new Scanner(System.in);

        int n=input.nextInt();

        System.out.print(n+"范围内的素数个数是"+isPrime(n));

    }

    public static int isPrime(int n)//使用sumDighits方法

    {

       int count=0;int j=0;//各个数字之和

       for(int i=2;i<n;i++)

       {

           for(j=2;j<Math.sqrt(i);j++)

           {

               if(i%j==0)

                   break;

           }

           if(j>Math.sqrt(i))

           count++;

       }

        return count;

    }

}
