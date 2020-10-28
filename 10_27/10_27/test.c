#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>


void* my_memmove(void* dest, const void* src, size_t count)
{
	void *ret = dest;
	assert(dest);
	assert(src);
	if (dest < src)
			{
				//前->后
				while (count--)
				{
					*(char*)dest = *(char*)src;
					dest = (char*)dest + 1;
					src = (char*)src + 1;
				}
			}
			else
			{
				//后->前 
				dest = (char*)dest+count - 1;
				src = (char*)src+count - 1;
				while (count--)
				{
					*(char*)dest = *(char*)src ;
					dest = (char*)dest - 1;
					src = (char*)src - 1;
				}
			}
	return ret;
		}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	my_memmove(arr+2, arr, 16);
	/*printf("%d\n", my_memmove(arr + 2, arr, 16));*/
	return 0;

}

//char* my_strstr(const char*str1, const char*str2)
//{
//	assert(str1);
//	assert(str2);
//	const char *s1 = str1;
//	const char *s2 = str2;
//	const char *cp = str1;
//	if (*s2 == '\0')
//	{
//		return (char *)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1&&*s2&&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//
//}
//
//
//
//
//int main()
//{
//	char *str1 = "abcdef";
//	char *str2 = "cd";
//	char* ret = my_strstr(str1, str2);
//	
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("没有找到\n");
//	return 0;
//	
//}
//
//char* my_strcat(char *dest, const char  *src)
//{
//	char*ret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "kun";
//	printf("%s\n", my_strcat(arr1, "lover"));
//	return 0;
//}
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1);
//	assert(s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//		return *s1 - *s2;
//	}
//}
//int main()
//{
//	int ret = my_strcmp("aa","abcd");
//	if (ret > 0)
//	{
//		printf("arr1大于arr2\n");
//	}
//	else if (ret==0)
//	{
//		printf("arr1等于arr2\n");
//	}
//	else if (ret<0)
//	{
//		printf("arr1小于arr2\n");
//	}
//
//
//
//	return 0;
//}