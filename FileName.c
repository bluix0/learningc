/**********************************
程序：数组习题1
编者：bluix0
时间：2025.2.21
 **********************************/
//找出一个二维数组中的鞍点。
// 即该位置上的元素在该行上最大、在该列上最小。
// 也可能没有鞍点。

#include<stdio.h>
#define xnum 3  //行数组空间
#define ynum 3  //列维数组空间
int main()
{
    //输入定义二维数组
    printf("输入%d个整数，他们构成%d*%d的一个矩阵，程序会输出它的鞍点：\n", xnum * ynum, xnum, ynum);
    int arr[xnum][ynum];
    for (int i = 0; i < xnum; i++)
        for (int j = 0; j < ynum; j++)
            scanf_s("%d", &arr[i][j]);


    //求每一行中的最大值
    int xmax, x;
    int xmax0[xnum][ynum] = { 0 };
    for (int i = 0; i < xnum; i++)
    {
        xmax = arr[i][0];
        x = 0;
        for (int j = 1; j < ynum; j++)
        {
            if (arr[i][j] > xmax)
            {
                xmax = arr[i][j];
                x = j;
            }
        }
        xmax0[i][x] = 1;
    }


    //求每一列的最小值
    int ymin, y;
    int ymin0[xnum][ynum] = { 0 };
    for (int j = 0; j < ynum; j++)
    {
        ymin = arr[0][j];
        y = 0;
        for (int i = 1; i < xnum; i++)
        {
            if (arr[i][j] < ymin)
            {
                ymin = arr[i][j];
                y = i;
            }
        }
        ymin0[y][j] = 1;
    }



    int o = 0;
    for (int m = 0; m < xnum; m++)
        for (int n = 0; n < ynum; n++)
            if (xmax0[m][n] == 1 && ymin0[m][n] == 1)
            {
                printf("(%d,%d)", m, n);
                o++;
            }

    if (o == 0)
        printf("没有");


    return 0;
}