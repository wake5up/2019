#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
//int main()
//{
//	int a = 5;
//	if (a = 0)//先把0赋值给a，然后判断a为0；进入else语句
//	{
//		printf("%d",a-10);
//	}
//	else
//	{
//		printf("%d",a++);//最后输出为0
//	}
//	return 0;
//}

//void main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1) continue;//死循环
//		if (i == 5) break;
//		i++;
//	}
//}

//把字符串中的空格替换为%20
char* replace(char *a)
{
	int count = 0;
	char *end = NULL;
	char *new_end = NULL;
	while (*a != '\0')
	{
		if (*a == ' ')
		{
			count++;
		}
		a++;
	}
	end = a;
	new_end = a + count * 2;
	while (end != new_end)
	{
		if (*end == ' ')
		{
			*new_end-- = '0';
			*new_end-- = '2';
			*new_end-- = '%';
			end--;
		}
		else
		{
			*new_end = *end;
			end--;
			new_end--;
		}
	}
	return new_end;
}
int main()
{
	int i;
	char str[] = "abc d e f ";
	replace(&str);
	printf("%s",str);
	return 0;
}