#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
void* my_memcpy(void*dest, const void*src, size_t count)
{
	void*ret = dest;
	assert(dest);
	assert(src);

	while (count--)
	{
		
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     my_memcpy(arr1+2, arr1, 16);
	 	int i = 0;
	 	for (i = 0; i < 10; i++)
	 	{
	 
	 		printf("%d\n", arr1[i]);
	 	}
	return 0;
}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     my_memmove(arr1+2, arr1, 16);
//	 	int i = 0;
//	 	for (i = 0; i < 10; i++)
//	 	{
//	 
//	 		printf("%d\n", arr1[i]);
//	 	}
//	return 0;
//}


//int  main()
//{
//	int a[] = { 1, 3, 4, 5, 6};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}