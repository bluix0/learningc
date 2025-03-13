/**********************************
程序：选择结构习题1
编者：bluix0
时间：2025.2.21
 **********************************/

//给一个不多于5位数的正整数，要求：
//求出他是几位数
//分别输出每一个数字
//按逆向输出各位数字，例如原数123输出321

#include<stdio.h>
int main()
{
printf("输入一个不超过五位数的正整数：\n");
int num = 0;
scanf_s("%d", &num);

    if (num >= 10000) 
{
    printf("该数字是 5 位数。\n");
    printf("每一位数字是: %d %d %d %d %d\n", num / 10000, (num / 1000) % 10, (num / 100) % 10, (num / 10) % 10, num % 10);
    printf("按逆序输出各位数字: %d%d%d%d%d\n", num % 10, (num / 10) % 10, (num / 100) % 10, (num / 1000) % 10, num / 10000);
}

    else if (num >= 1000)
{
    printf("该数字是 4 位数。\n");
    printf("每一位数字是: %d %d %d %d\n", num / 1000, (num / 100) % 10, (num / 10) % 10, num % 10);
    printf("按逆序输出各位数字: %d%d%d%d\n", num % 10, (num / 10) % 10, (num / 100) % 10, num / 1000);
}
    else if (num >= 100) 
{
    printf("该数字是 3 位数。\n");
    printf("每一位数字是: %d %d %d\n", num / 100, (num / 10) % 10, num % 10);
    printf("按逆序输出各位数字: %d%d%d\n", num % 10, (num / 10) % 10, num / 100);
}

    else if (num >= 10) 
{
    printf("该数字是 2 位数。\n");
    printf("每一位数字是: %d %d\n", num / 10, num % 10);
    printf("按逆序输出各位数字: %d%d\n", num % 10, num / 10);
}

    else 
{
    printf("该数字是 1 位数。\n");
    printf("每一位数字是: %d\n", num);
    printf("按逆序输出各位数字: %d\n", num);
}
return 0;
}


//回文数
//例如：14689的回文数是146898641
int main()
{
long num=0;
long arr[10]={0};
scanf("%ld",&num);

long n=num;
int len=0;
do{
arr[len++]=n%10;
n/=10;
}while (n>0);

printf("%ld",num);
for(int i=1;i<=len;i++)
printf("%d",arr[i]);

return 0;
}
