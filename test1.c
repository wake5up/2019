import java.util.Scanner;
public class Average 
{
    public static void main(String[] args) 
    {
        System.out.print("请输入数据个数:");
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        System.out.print("请输入数据元素:");
        int[] array=new int [n];
        for(int i=0;i<n;i++)
        {
            array[i]=input.nextInt();
        }
        System.out.print("输入的数据的平均值是"+average(array,n));
    }
    public static int average(int[] array,int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=array[i];
        }
        int aver=sum/n;
        return aver;
    }
    
}
