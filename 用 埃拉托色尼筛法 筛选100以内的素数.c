/**********************************
程序：用 埃拉托色尼筛法 筛选100以内的素数
编者：bluix0
时间：2025.2.26
 **********************************/

 //合数指除了 1 和自身以外，还有其他因数的整数
//所有合数都可以由小的素数来生成
//利用素数的倍数来筛选合数
//从最小的素数2开始，将它们的倍数标记为合数
//求n以内的素数，筛选到根号n即可

#include<stdio.h>
#define N 100       //将100定义给N，便于修改数据
int main()
{
	int num[N+1];//初始化数组，假设所有数都为素数
		for (int i = 2;i <= N;i++)//从[2]开始定义为1
			num[i] = 1;

		for (int i = 2;i * i <= N;i++)//从2筛选到根号N
		{
			if (num[i] == 1)//是否为素数
				for (int j = i * i;j <= N + 1;j += i)//找出素数的倍数，将他们定义为0
					num[j] = 0;
		}
		
		printf("%d以内的素数有：\n", N);//打印出值为1的数
		for (int k = 0;k <= N;k++)
			if (num[k] == 1)
				printf("%d ", k);
		return 0;
}
