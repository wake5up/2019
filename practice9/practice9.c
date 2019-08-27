#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

char * deblank(char * str)
{
	char * left = str;//前面的指针，负责赋值
	char * right = str;//后面寻找非空格字符的指针

	while (*right)//截至字符串完
	{
		if (*right != ' ')
		{
			if (left<right)
			{
				*left = *right;//赋值
			}
			left++;
		}
		if (*right == ' '&&*(right + 1) != ' ')//寻找到下一个单词时，对left的操作
		{
			*left = ' ';
			left++;
		}
		right++;
	}
	*left = '\0';
	return *str != ' ' ?str:(str + 1);//防止首单词之前有空格现象
}
int main()
{
	char str[] = "    as   adadq       k    ";
	char *a = deblank(str);
	int i;
	for (i = 0; i < strlen(a); i++)
	{
		printf("%c",*(a+i));
	}
	return 0;
}