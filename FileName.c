/**********************************
程序：统计字符串中各种字符数量
编者：bluix0
时间：2025.3.1
 **********************************/

//有一篇文章，共有3行文字，
// 每行有80个字符。
// 要求分别统计出其中
// 英文大写字母、小写字母、数字、空格以及其他字符的个数。

#include<stdio.h>   //fgets函数头文件
#include<ctype.h>   //isupper,islower,isspace函数头文件
int main()
{
    for (int m = 0; m < 3; m++)
    {
        printf("请输入第%d句话\n", m + 1);
        char arr[100];
        fgets(arr, sizeof(arr), stdin);
        int up = 0, lo = 0, num = 0, spa = 0, oth = 0;
        
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (isupper(arr[i]))
                up++;
            else if (islower(arr[i]))
                lo++;
            else if (isdigit(arr[i]))
                num++;
            else if (isspace(arr[i]))
                spa++;
            else
                oth++;
        }

        printf("大写字母有%d个\n", up);
        printf("小写字母有%d个\n", lo);
        printf("数字有%d个\n", num);
        printf("空格有%d个\n", spa - 1);      //减一是因为fgets运行时会在字符串后面加上\n，isspace函数会多读取一个\n
        printf("其他字母有%d个\n", oth);

        up = lo = num = spa = oth = 0;      //统计完第一句话，初始化值
    }
    return 0;
}