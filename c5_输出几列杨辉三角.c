/**********************************
程序：输出几行杨辉三角
编者：bluix0
时间：2025.2.27
**********************************/
#include<stdio.h>
int main()
{
    int a[yh][yh];
    for(int i=0; i<yh; i++)
    {   a[i][0]=1;
        a[i][i]=1;
    }
    for(int i=2; i<yh; i++)
        for(int j=1; j<=i-1; j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(int i=0; i<yh; i++)
    {   for(int j=0; j<i+1; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
