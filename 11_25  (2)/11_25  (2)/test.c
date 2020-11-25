#include<stdio.h>


//void merge(int* A, int ALen, int m, int* B, int BLen, int n)
//{
//	// write code here
//	if (m == 0)
//	{
//		for (; n>0; n--)
//		{
//			A[n - 1] = B[n - 1];
//		}
//	}
//	else
//	{
//		int a = m - 1;
//		int b = n - 1;
//		int s = m + n - 1;
//		while (a >= 0 && b >= 0)
//		{
//			if (A[a]>B[b])
//			{
//				A[s] = A[a];
//				a--;
//				s--;
//			}
//			else
//			{
//				A[s] = B[b];
//				b--;
//				s--;
//			}
//		}
//		if (a == -1)
//		{
//			for (; b >= 0; b--)
//			{
//				A[b] = B[b];
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 4, 5, 6, 7, 8, };
//	int ALen = sizeof(a) / sizeof(a[0]);
//	int m = 5;
//	int BLen = sizeof(b) / sizeof(b[0]);
//	int n =5;
//	merge(a, ALen, m, b, BLen, n);
//	for (int i = 0; i < m + n; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}




//ì³²¨ÄÇÆõÊýÁÐ
//int Fibonacci(int n)
//{
//	// write code here
//	int fib1 = 0;
//	int fib2 = 1;
//	int fib3 = 0;
//	if (n == 0)
//	{
//		return 0;
//	}
//	if (n == 1)
//	{
//		return 1;
//	}
//	for (int i = 1; i<n; i++)
//	{
//		fib3 = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib3;
//	}
//	return fib3;
//}


char* solve(char* str)
{
	// write code here
	if (str == NULL)
	{
		return NULL;
	}
	int len = strlen(str);
	int i = 0;
	for (i = 0; i<len / 2; i++)
	{
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
	return  str;
}
int main()
{
	char arr[] = "abcd";
	printf("%d", strlen(arr));
}