#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int num(int money)
{
	int x = money;//x表示汽水数
	int y = money;//y表示 空瓶子的数
	while (y>1)
	{
		x = x + y / 2;
		y = y / 2 + y % 2;
	}
	return x;
}
int main()
{
	int money = 0;
	printf("输入钱数：");
	scanf("%d", &money);
	printf("%d", num(money));
	return 0;
}
//int main()
//{
//	int x;
//	int y;
//	int z;
//	for (x = 1; x <= 13; x += 2)//上7行
//	{
//		for (y = (13 - x) / 2; y >= 1; y--)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= x; z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (x = 11; x >= 1; x -= 2)//下6行
//	{
//		for (y = (13 - x) / 2; y >= 1; y--)
//		{
//			printf(" ");
//		}
//		for (z = 1; z <= x; z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int fun(int m, int n)//计算m的n次方
//{
//	if (n != 0)
//		return m*fun(m, n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int tmp = i;
//		int n = 0;
//		while (tmp)//计算位数
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			int m = tmp % 10;//m保存当前m的个位数
//			int ret = fun(m, n);
//			tmp /= 10;//tmp左移
//			sum += ret;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//
//}
//int fun(int n, int a)
//{
//	int num = 0;
//	while (n > 0)
//	{
//		num = num * 10 + a;
//		n--;
//	}
//	return num;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		Sn = Sn + fun(i, a);
//	}
//	printf("%d\n", Sn);
//	return 0;
//}
//void reverse_string(char *arr)
//{
//	char *p=arr+strlen(arr)-1;
//	char temp;
//	while (arr<p)
//	{
//		temp=*p;
//		*p-- = *arr;
//		*arr++ = temp;
//
//	}
//}
//int main()
//{
//	char a[10]="abcdefg";
//	reverse_string(a);
//	printf("%s", a);
//	return 0;
//}
//void print(int arr[])
//{
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print(arr);
//	return 0;
//}