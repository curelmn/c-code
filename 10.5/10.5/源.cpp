#include<stdio.h>
void guess()//猜名次
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 && (b==2)+(e==4)==1&&(c==1)+(d==2)==1&&(e==4)+(a==1)==1)
						if (a*b*c*d*e != 120)
						{
							continue;
						}
						else
						{
							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
						}

					}
				}
			}
		}
	}
}
int main()
{
	guess();
	return 0;
}
int main()//猜凶手
{
	int killer = 'A';//利用ACII码值
	for (; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("killer is:%c\n", killer);
		}
	}
	return 0;
}
int main()//杨辉三角
{
	int arr[5][5] = { 0 };
	int i = 0;//控制行
	int j = 0;//控制列
	for (i = 0; i < 5; i++)
     {
		for (j = 0; j <= i; j++)
		{
			if (i == 0 || i == 1)
			{
				arr[i][j] = 1;
			}
			if (j != 0 && j != i)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
			else
			{
				arr[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j <= i; ++j)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d%d", a + b, c);
	return 0;
}