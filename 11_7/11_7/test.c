#include<stdio.h>
#include<string.h>
#include<assert.h>

void finddog(int arr[], int sz, int *p1, int *p2)
{
	int i = 0;
	int pos = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)//遍历，结果为两个不同数的异或
	{
		ret ^= arr[i];
	}
	//寻找两个不同数异或结果的一个位为1的位
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)//找到数组中pos为1的数异或
		{
			*p1 ^= arr[i];
		}
		else//找到数组中pos为0的数进行异或
		{
			*p2 ^= arr[i];
		}
	}

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6 };
	int num1 = 0;
	int num2 = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	finddog(arr, sz, &num1, &num2);
	printf("%d %d", num1, num2);
}

//void bubble_sort(int *p, int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (p[j]>p[j + 1])
//			{
//				int temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//}
//void finddog(int* a, int n, int* num)
//{
//	bubble_sort(a, n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n;)
//	{
//		if (a[i] == a[i + 1])
//		{
//			i += 2;//跳过一组
//		}
//		else
//		{
//			num[j] == a[i];
//			i++;
//			j++;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 1, 3, 4, 5 };
//	int num[2] = { 0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	finddog(a, sz, num);
//	printf("%d %d", num[0], num[1]);
//	return 0;
//}
//
//
//char* my_strncpy(char* dest, const char*src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char *ret = dest;
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//int main()
//{
//	char s1[20] = "caixukun";
//	char s2[] = "luminna";
//	my_strncpy(s1, s2, 2);
//	printf("%s", s1);
//	return 0;
//}
//
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
//		{
//			*dest++ = *src++;
//		}
//	}
//	dest = '\0';
//	return ret;
//}
//int main()
//{
//	char s1[20] = "caixukun";
//	char  s2[] = "luminna";
//	my_strncat(s1, s2,3);
//	printf("%s", s1);
//	return 0;
//}
//
//
//
//enum state
//{
//	VALID,
//	INVALID
//}state=VALID;
//int my_atoi(const char* str)
//{
//	int flag = 0;
//	state = INVALID;
//	//空指针
//	if (str == NULL)
//		return 0;
//	//空白字符的处理
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//+-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str) == 0)
//		{
//			break;
//		}
//		else
//		{
//			ret = ret * 10 + flag*(*str - '0');
//
//			str++;
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char*p = "    -123";
//	int ret = my_atoi(p);
//	printf("%d\n", ret);
//
//	return 0;
//}
