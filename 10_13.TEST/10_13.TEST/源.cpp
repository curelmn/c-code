#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void left_order(char *str, int len, int k)
{
	k = k%len;//�����ظ��ƶ�
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char temp = str[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = temp;
     }

}
int main()
{
	char  arr[] = "abcd";
	int k = 1;
	int len = strlen(arr);
	printf("������Ҫ�����ַ��ĸ�����");
	scanf("%d",&k);
	left_order(arr, len, k);
	printf("������%s\n", arr);
		return 0;

}