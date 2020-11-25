#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int upper_bound_(int n, int v, int* a, int aLen)
{
	int left = 0, right = n, mid;
	while (left<right){
		mid = left + (right - left) / 2;
		if (a[mid] >= v){
			right = mid;
		}
		if (a[mid]<v){
			left = mid + 1;
		}
	}
	return left + 1;
}
int main()
{
	int a[5] = { 1, 2, 4, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	int v = 0;
	int aLen = sizeof(a) / sizeof(a[0]);
	scanf("%d", &v);
	int ret = upper_bound_(n, v, a, aLen);
	printf("%d", ret);
	return 0;
}