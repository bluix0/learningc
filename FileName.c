/**********************************
程序：数组习题2
编者：bluix0
时间：2025.3.1
 **********************************/

 //有一个已排好序的数组，
// 要求输人一个数后，
// 按原来排序的规律将它插人数组中。

#include<stdio.h>
#define num 10        //数组的元素数量
int main()
{
    int arr[num + 1] = { 8,18,28,38,48,58,68,78,88,98 };
    printf("输入一个正整数，把它插入到数组中\n");
    int in = 0, b = 0;
    scanf_s("%d", &in);
   
    for (int i = 0; i < num; i++)
    {
        if (in <= arr[i])
            for (int j = num; j > i; j--)
            {
                arr[j] = arr[j - 1];
                arr[i] = in;
                b = 1;
            }
    }
    if (b == 0)
        arr[num] = in;

    //打印出插入后的数组
    for (int i = 0; i <= num; i++)
        printf("%d ", arr[i]);
    return 0;
}