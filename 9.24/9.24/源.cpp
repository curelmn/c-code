#define _CRT_SECURE_N0_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

void reorder(int arr[], int sz)
{
	int *left=arr;
	int *right=arr+sz-1;
	while (left < right)
	{
		while(*left % 2 == 1)
		{
			left++;
		}
		while (*right % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}

	}
}
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int sz = (sizeof(arr) / sizeof(arr[0]));
	reorder(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str!=0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//void my_strcpy(char*dest, char*src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy(char*dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//			{
//				;
//			}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "XXXXXXXX";
//	char *p = NULL;
//	printf("%s", my_strcpy(arr2, arr1));
//	return 0;
//}