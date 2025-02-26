/**********************************
程序：打印一个菱形
编者：bluix0
时间：2025.2.25
 **********************************/
#include<stdio.h>
int main()
{
	printf("法一：循环语句输出，输入1\n法二：数组输出，输入0\n");
	int  a = 0;
	scanf_s("%d", &a);
	if (a)
	
	 //法一：用循环语句输出
	{
		int i, j;
		for (i = 1;i <= 4;i++)
		{
			for (j = 4 - i;j > 0;j--)
				printf(" ");
			for (j = 2 * i - 1;j > 0;j--)
				printf("*");
			printf("\n");
		}
		for (i = 3;i >= 1;i--)
		{
			for (j = 4 - i;j > 0;j--)
				printf(" ");
			for (j = 2 * i - 1;j > 0;j--)
				printf("*");
			printf("\n");
		}
	}
	
	else
		
	  //法二：创建数组输出
	{
		char a[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
		for (int i = 0;i <= 4;i++)
		{
			for (int j = 0;j <= 4;j++)
				printf("%c", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}

