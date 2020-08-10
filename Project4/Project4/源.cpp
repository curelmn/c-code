#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int x, int y)
{   int z;
	z = (x > y) ? x : y;
	return z;
}
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("请输入两个整数：");
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("%d", c);
	return 0;
}