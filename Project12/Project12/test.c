#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void reverse_string(char arr[])
{
	char tep = arr[0];
	int len = strlen(arr) - 1;
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[len - 1] = tep;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}




//ตÝน้
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