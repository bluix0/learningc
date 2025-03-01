/**********************************
程序：折半法
编者：bluix0
时间：2025.3.1
**********************************/

//有15个数按由大到小顺序存放在一个数组中，
//输人一个数，
//要求用折半查找法找出该数是数组中第几个元素的值。
//如果该数不在数组中，则输出“无此数”。

#include<stdio.h>
int main()
{
    int a = 0;
    int arr[] = { 19,16,14,13,12,10,9,8,7,6,5,4,3,2,1 };
    printf("输入你想寻找的数：\n");
    scanf_s("%d", &a);

    int n = sizeof(arr) / sizeof(arr[0]);       //n求得为数组的元素个数
    int low = 0, high = n - 1;         //low,high相当于边界
    int num = 0;
    while (low <= high)          //循环折半
    {
        int mid = (low + high) / 2;          //每次与中间比较
        if (a == arr[mid])
        {
            printf("这个数是第%d个元素\n", mid + 1);
            num = 1;
            break;
        }
        else if (a < arr[mid])
            low = mid + 1;              //折半缩小边界
        else
            high = mid - 1;
    }

    if (num == 0)              //多次的折半使范围固定在一个元素上，此元素等于输入的数
        printf("你输入的数字不储存在该数组中");
    return 0;
}
