#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ѹ���ַ�����ȱ�㣺���ܶ���9�������ַ���
char* Compr_str(char* str)
{
	char* left = str;
	char* right = str;
	char count;
	while (*right != '\0')
	{
		count = '1';//�ַ�1
		while (*right == *(right + 1))//�ж�ǰ���ַ��Ƿ��ظ�
		{
			count++;
			right++;
		}
		*left = count;
		left++;
		if (*right != *(right + 1))//������һ���ַ�
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
		printf("%c",*(a+i));//��ӡ
	}
	return 0;
}