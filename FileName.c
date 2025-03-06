/**********************************
程序：猜数字游戏
编者：bluix0
时间：2025.3.6
 **********************************/

//太乱了这样写在一个源文件中，有时间了多写出来几个函数，减一下肥

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 100
#define MIN_NUM 1


void clear(void)
{
	while (getchar() != '\n');
}


int main()
{
	int guessnumber, makenumber,num=1;
	char reply;
	srand(time(NULL));
	makenumber =( rand() % (MAX_NUM - MIN_NUM + 1) )+ MIN_NUM;
	printf("开始猜数字，输入一个在区间[%d,%d]之间的数字：\n",MIN_NUM,MAX_NUM);
	while (scanf_s("%d", &guessnumber) != 1)
	{
		printf("输入无效，请输入一个整数\n");
		clear();
	}
	while(guessnumber!=makenumber)
	{
		if (guessnumber > makenumber)
			printf("你猜的太大了！\n");
		else
			printf("你猜的太小了！\n");
		if (num >= 10)
		{
			printf("是否继续猜数？y/n or Y/N\n");
			clear();
			while (scanf_s(" %c", &reply, 1) != 1 || (reply != 'y' && reply != 'Y' && reply != 'n' && reply != 'N'))
			{
				printf("输入无效，请输入 'y/Y' 继续或 'n/N' 退出：\n");
				clear();
			}
			if (reply == 'n' || reply == 'N')
			{
				printf("正确的数字是%d\n游戏结束", makenumber);
				return 0;
			}
			else
				printf("你选择了%c，请继续输入：\n",reply);
		}
		else
			printf("请重新输入：\n");
			while (scanf_s("%d", &guessnumber) != 1)
			{
				printf("输入无效，请输入一个整数：\n");
				clear();
			}
				num++;
	}
	printf("你猜对了！尝试次数为：%d",num);
	return 0;
	}