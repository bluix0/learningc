/**********************************
程序：连接两个数组(效仿strcat函数)
编者：bluix0
时间：2025.3.2
 **********************************/

#include<stdio.h>
#define num 20  //num为arr1数组的大小
int main()
/*
{
    char arr1[num] = "China is";
    char arr2[] = " good.";
    int x = strlen(arr1) / sizeof(arr1[0]);     //求arr1中字符串的长度
    for (int i = 0; arr2[i] != '\0'; i++)
    {
        arr1[x] = arr2[i];
        x++;
        if (x >= num)
        {
            printf("数组1装不下了！");
            break;
        }
    }
    arr1[num] = '\0';
    printf("%s", arr1);
    return 0;
}
*/
{
    char arr1[num] = "China is";
    char arr2[] = " good.";
    int x;
    for (x = 0; arr1[x] != 0; x++);
    for (int y = 0; arr2[y] != 0; y++)
    {
        arr1[x] = arr2[y];
        x++;
    }
    arr1[x] = 0;
    printf("%s", arr1);
    return 0;
}