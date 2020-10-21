#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int int_cmp(const void *p1, const void*p2)
{
	return(*(int*)p1 - *(int*)p2);
}
void _swap(char *buf1, char *buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1=*buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;

	}
}
void bubble_sort(void *base, int sz, int width, int(*cmp)(const void *n1,const void*n2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1 )* width)>0)
			{
				_swap((char *)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}
int main()
{
	int arr[] = { 1,3,4,5,6,2,9,8,7 };
	/*char *arr[] = {'a','d','c','b'  };*/
	int i = 0;
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d", arr[i]);
		/*printf("%c", arr[i]);*/
	}
	return 0;
}

int cmp1(const void* p1, const void* p2) 
{
	
	return *((int*)p1) - *((int*)p2);
}

int cmp2(const void* p1, const void* p2)
{
	
	return *((char*)p1) - *((char*)p2);
}

int cmp3(const void* p1, const void* p2) 
{
	
	return strcmp(*((char**)p1), *((char**)p2));
}

int cmp4(const void* p1, const void* p2) 
{
	
	return *((double*)p1) - *((double*)p2);
}

int main() {
	int arr1[] = { 1,3,6,9,8 };
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp1);
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) 
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");


	char arr2[] = { 'a', 'f', 'b', 'd', 'c', 'e' };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n");


	char* arr3[] = { "aaa", "ggg", "ccc", "xxx", "kkk",  };
	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		printf("%s ", arr3[i]);
	}
	printf("\n");


	double arr4[] = { 2,3,8.2, 1.5, 9.0, 8.9 };
	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) 
	{
		printf("%f ", arr4[i]);
	}
	printf("\n");
	return 0;
}
void left_move(char *s1, int k)
{
	while (k != 0)
	{
		char *str = s1;
		char tmp = *str;
		while ((*(str + 1)) != '\0')
		{
			*str = *(str + 1);
			str++;
		}
		*str = tmp;
		k--;
	}
}
int judge(const char *s1, const char *s2)
{
	int i = 0;
	if (strlen(s1) != strlen(s2))
	{
		return 0;
	}
	else
	for (i = 0; i <= strlen(s1) - 1; i++)
	{
		left_move(s1, 1);
		if (strcmp(s1, s2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	char s3[] = "abcd";
	char s4[] = "ABCD";
	char s5[] = "AABCD";
	char s6[] = "ABCDA";
	int ret1 = judge(s1, s2);
	int  ret2 = judge(s3, s4);
	int ret3 = judge(s5, s6);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	printf("%d\n", ret3);
	return 0;
}
int find(int a[3][3], int x) 
{
	int i = 0;
	int j = 2;

	while (j >= 0 && i < 3)
	{
		if (a[i][j] < x) 
		{
			i++;
		}
		else if (a[i][j] > x) 
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


	int main()
	{
		int arr[3][3] = { {1,3,5}, {3,5,7}, {5.7,9} };
		printf("输入要查找的数");
		int x = 0;
		scanf("%d", &x);
		int ret = find(arr, x);
		if (ret = 1)
		{
			printf("找到了\n");
		}
		else
		{
			printf("没有找到\n");
		}
		return 0;
	}
