#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void fun(int n)
{
	int i;
	int j;
	int t;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d ", i, j, t = i*j);
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	fun(n);
	return 0;
}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	is_leap_year(year);
//	if (is_leap_year(year) == 1)
//		printf("%d是闰年",year);
//	else if (is_leap_year(year) == 0)
//		printf("%d不是闰年",year);
//	return 0;
//}
//void swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = *px;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	printf("交换前：x=%d y=%d", x, y);
//	swap(&x, &y);
//	printf("交换后：x=%d y=%d", x, y);
//	return 0;
//}
//int fun(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n*1.0); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int  i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (fun(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}