/********************************
程序：为输入的数字排序
编者：bluix0
时间：2025.2.25
*********************************/
 /*简版
*{
*	//给十个整数排序
*	int a[10];					//数组装载十个整数
*	for (int i=0;i<9;i++){
*		for (int j=i+1;j<=9;j++){
*			if(a[i]>a[j]){			//找到最小的数并将它放在左边一位
*				int x =a[i];
*				a[i]=a[j];
*				a[j]=x;
*			}
*		}
*	}
*	for(int k=0;k<=9;k++)
*	printf("%d",a[k]);
*}
*/
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
