/**********************************
程序：猜数字游戏2
编者：bluix0
时间：2025.3.8
 **********************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_NUM 1000
#define MIN_NUM 1

//清空
void CLEAR(void)
{
	while (getchar() != '\n');
}

//制作随机数
int MAKENUM(void)
{
	srand(time(NULL));
	int n = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
	assert(n >= MIN_NUM && n <= MAX_NUM);
	return n;
}

//接受数据并检查
int PUT_CHECK(void)
{
	int guessnumber;
	while (scanf_s("%d", &guessnumber) != 1)
	{
		printf("输入无效，请输入一个整数\n");
		CLEAR();
	}
	CLEAR();
	return guessnumber;
}

//判断大小
int DECIDE(int guessnumber, int makenumber,int num)
{
	if (guessnumber != makenumber)
	{
		if (guessnumber > makenumber)
			printf("你猜的太大了！\n");
		else
			printf("你猜的太小了！\n");
		return 1;
	}
	else
		printf("你猜对了,尝试次数为%d\n",num);
}

//判断是否继续
int WEATHER(int num)
{
	char reply;
	CLEAR();
	printf("你已经尝试了%d次了，是否继续猜数？y/n or Y/N\n",num);
	while (scanf_s(" %c", &reply, 1) != 1 || (reply != 'y' && reply != 'Y' && reply != 'n' && reply != 'N'))
	{
		printf("输入无效，请输入 'y/Y' 继续或 'n/N' 退出：\n");
		CLEAR();
	}
	if (reply == 'n' || reply == 'N')
		return 1;
	else if(reply == 'y' || reply == 'Y')
		return 0;
}

//主函数
int main()
{
	int makenumber, num = 0;
	printf("开始猜数字，输入一个在区间[%d,%d]之间的数字：\n", MIN_NUM, MAX_NUM);
	makenumber = MAKENUM();
	while (DECIDE(PUT_CHECK(), makenumber, num) == 1)
	{
		num++;
		if (num >= 10 && num % 10 == 0)
			if (WEATHER(num) == 1)
			{
				printf("程序结束，正确数字是%d\n", makenumber);
				break;
			}
			else
				printf("游戏继续，请输入数字：\n");
	}
	return 0;
}