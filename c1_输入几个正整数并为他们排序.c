/********************************
程序：为输入的数字排序
编者：bluix0
时间：2025.2.25
*********************************/

//冒泡法排序
#include<stdio.h>
int main()
{	
	//接受输入的几个数，并计数i
	int a[1000],i;
	printf("请输入几个数：\n");
	for (i = 0;i <= 1000;i++)
	{
		scanf_s("%d", &a[i]);
		if (getchar() == '\n')
			break;
	}
	
	
	//选择顺序，给o赋值
	int o;
	printf("若要从小到大排列，输入1\n若要从大到小排列，输入0\n");
	scanf_s("%d", &o);


	//开始排列
	for (int j = 0;j < i;j++)
	{
		for (int k = j + 1;k <= i;k++)
		{
			if (a[j] > a[k])
			{
				int x = a[j];
				a[j] = a[k];
				a[k] = x;
			}
		}
	}
	if (o)
	{
		for (int l = 0;l <= i;l++)
			printf("%d ", a[l]);
	}
	else
	{
		for (int l = i;l >= 0;l--)
			printf("%d ", a[l]);
	}
	return 0;
}

//选择法排序
#include<stdio.h>
int main()
{
	int arr[10] = { 4,2,3,5,2,6,5,2,7,9 };
	for (int i = 0;i < 10;i++) {
		int x = i;
		for (int j = i + 1;j < 10;j++)
		{
			if (arr[j] > arr[x])
				x = j;
		}
		if (x != i) {
			int y = arr[i];
			arr[i] = arr[x];
			arr[x] = y;
		}
	}
	for (int i = 0;i < 10;i++)
		printf("%d", arr[i]);
	return 0;
