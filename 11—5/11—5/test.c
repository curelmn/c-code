#include<stdio.h>
#include<windows.h>
#include<assert.h>

int Strlen(const char*p)
{
	assert(p);
	if (*p== '\0')
	{
		return 0;
	}
	else
	{
		return 1 + Strlen(p + 1);
	}

}
int main()
{
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}









//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	int num=124;
//	print(num);
//	return 0;
//}

//int main()
//{
	/*char arr1[] = "abcdefghijk";
	char arr2[] = "xxxxxxxxxxx";
	printf("%s\n",arr2);
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}*/
	/*int i = 0;
	int n = 3;
	int s = 1;
	int sum = 0;
	for (i = 1; i <=3; i++)
	{
		s = i*s;
		sum = sum + s;
	
	}
	printf("%d\n", s);
	printf("%d\n", sum);*/
	/*int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	{
		k++;
		printf("hehe");
	}*/
	//int i = 1;
	//while (i <= 10)
	//{
	//	i = i + 1;
	//	if (i == 5)
	//		//break;
	//		continue;
	//	printf("%d", i);
	//	//i = i + 1;
	//}
//	return 0;
//
//}