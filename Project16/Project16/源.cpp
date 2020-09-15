#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
//int fuc(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fuc(n, k - 1);
//	}
//}
//int main()
//{
//	int n=0;
//	int k=0;
//	scanf("%d%d", &n, &k);
//	int ret = fuc(n, k);
//	printf("%d\n", ret);
//	return 0;
//}
//int DigitSum(int a)
//{
//	if (a > 9)
//	{
//		return DigitSum(a / 10) + a % 10;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//	{
//		int a = 0;
//		scanf("%d", &a);
//		int ret = DigitSum(a);
//		printf("%d", ret);
//		return 0;
//	}

void Iint(int arr[])
{
	int i=0;
	for (i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
}
void print_arr(int arr[])
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		
	printf("%d", arr[i]);
	}
}
void reverse(int arr[])
{
	int arr[N] = {0};
    int  i = 0;
	int temp=0;
	for (i = 0; i < N; i++)
	{
		temp = a[i];
		a[i] = a[N - i - 1];
		a[N - i - 1] = temp;
	}
}
int main()
{
	int i = 0;
	int arr[N] = { 0 };
    Iint(arr);
	scanf("%d", arr[i]);
	reverse(arr);
	return 0;
}
//int Fib(int n)
//{
//	int count = 0;
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int DigSum(int a)
//{
//	int sum = 0;
//	if (a > 9)
//	{
//		DigSum(a / 10);
//	}
//	sum = sum + a % 10;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = DigSum(a);
//	printf("%d", ret);
//	return 0;
//}