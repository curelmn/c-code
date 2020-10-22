#include<stdio.h>
#include<string.h>
#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//size_t my_strlen(const char* str)
//{
//   assert(*str!=NULL)£»
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//size_t my_strlen(const char* str)
//{
//	const char *start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
char* my_strcpy(char *arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	while (*(arr1++) = *(arr2++))
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "cdefg";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}