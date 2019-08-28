#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//压缩字符串，缺点：不能多余9个连续字符串
char* Compr_str(char* str)
{
	char* left = str;
	char* right = str;
	char count;
	while (*right != '\0')
	{
		count = '1';//字符1
		while (*right == *(right + 1))//判断前后字符是否重复
		{
			count++;
			right++;
		}
		*left = count;
		left++;
		if (*right != *(right + 1))//跳到下一个字符
		{
			*left = *right;
			left++;
			right++;
		}
	}
	*left = '\0';
	return str;
}
int main()
{
	char str[] = "aaabbbbbcccccc";
	int i;
	char* a = Compr_str(str);
	for (i = 0; i < strlen(str); i++)
	{
		printf("%c",*(a+i));//打印
	}
	return 0;
}