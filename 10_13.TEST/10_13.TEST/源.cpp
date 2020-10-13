#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void left_order(char *str, int len, int k)
{
	k = k%len;//避免重复移动
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
	printf("输入需要左旋字符的个数：");
	scanf("%d",&k);
	left_order(arr, len, k);
	printf("左旋后：%s\n", arr);
		return 0;

}