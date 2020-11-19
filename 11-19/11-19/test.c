#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<limits.h>
#include<assert.h>
#include<string.h>
//字符串左旋
////void left_order(char*p, int len, size_t k)
////{
////	k = k%len;
////	assert(p);
////	int i = 0;
////	for (i = 0; i < k; i++)
////	{
////		int tmp = p[0];
////		int j = 0;
////		for (j = 0; j < len - 1; j++)
////		{
////			p[j] = p[j + 1];
////		}
////		p[j] = tmp;
////	}
////}
////int main()
////{
////	char arr[] = "abcde";
////	int k = 1;
////	int len = strlen(arr);
////	scanf("%d", &k);
////	left_order(arr, len, k);
////	printf("%s\n", arr);
////	return 0;
////}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}
//void* my_memmove(void* dest, void*src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr1 + 2, arr1, 16);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}
//模拟实现 strncat
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char *ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		if (*src)
//		*dest++ = *src++;
//	}
//	dest = '\0';
//	return ret;
//}
//int main()
//{
//	char s1[30] = "abcdef";
//	char s2[] = "bbbbbb";
//	my_strncat(s1, s2, 3);
//	printf("%s", s1);
//}
//模拟实现atoi
//enum state
//{
//	VALID,
//	INVALID
//}state=VALID;
//int my_atoi( const char* str)
//{
//	int flag = 0;
//	state = INVALID;
//	if (str == NULL)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '+')
//	{
//		str++;
//		flag = 1;
//	}
//	if (*str =='-')
//	{
//		str++;
//		flag = -1;
//	}
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag*((*str) - '0');
//		if (ret > INT_MAX||ret < INT_MIN)
//		{
//			ret = 0;
//			return (int)ret;
//		}
//		str++;
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char *p = "    -123";
//	int ret=my_atoi(p);
//	printf("%d", ret);
//	return 0;
//
//}

//void is_traingle(int a, int b, int c)
//{
//	if (a + b > c&&a + c > b&&b + c > a)
//	{
//		if (a == b&&b == c)
//		{
//			printf("等边三角形");
//		}
//		else if (a == b || a == c || c == b)
//		{
//			printf("等腰三角形");
//		}
//		else
//		{
//			printf("一般三角形");
//		}
//
//	}
//	else
//	{
//		printf("非法三角形");
//	}
//		
//}
//int main()
//{
//	int  a=0;
//	int b=0;
//	int c=0;
//	scanf("%d %d %d",a,b,c);
//	is_traingle(a, b, c);
//
//	return 0;
//}
//int main()
//{
//	int n;
//	int a[1000] = { 0 };
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//去重
//	for (int i = 0; i < n; i++)
//	{
//		int k = a[i];
//		for (int j = i + 1; j < n; j++)
//		{
//			if (k == a[j])
//			{
//				for (int k = j; k <= n- 1; k++)
//				{
//					a[k] = a[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//	
//
//	return 0;
//}
//整数二进制奇数位偶数位交换

//#define CHANGE(x)  (((x&(0x55555555))<<1)|((x&(0xAAAAAAAA))>>1))
//
//int main()
//{
//	int x = 4;
//	printf("%d\n", CHANGE(x));
//	return 0;
//}
//offsetof 实现
//struct S
//{
//	char c1;
//	int i;
//	double c2;
//};
//#define OFFSETOF(sn,mn)  ((size_t)&((sn*)0)->mn)
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}