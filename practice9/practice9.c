#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

char * deblank(char * str)
{
	char * left = str;//ǰ���ָ�룬����ֵ
	char * right = str;//����Ѱ�ҷǿո��ַ���ָ��

	while (*right)//�����ַ�����
	{
		if (*right != ' ')
		{
			if (left<right)
			{
				*left = *right;//��ֵ
			}
			left++;
		}
		if (*right == ' '&&*(right + 1) != ' ')//Ѱ�ҵ���һ������ʱ����left�Ĳ���
		{
			*left = ' ';
			left++;
		}
		right++;
	}
	*left = '\0';
	return *str != ' ' ?str:(str + 1);//��ֹ�׵���֮ǰ�пո�����
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