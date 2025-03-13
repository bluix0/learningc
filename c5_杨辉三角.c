/**********************************
程序：输出几行杨辉三角
编者：bluix0
时间：2025.2.27
**********************************/
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
 1 5 10 10 5 1

#include<stdio.h>
#define yh 10

int main()
{
    int a[yh][yh];  //数组a装2*2的数阵
    
    for(int i=0; i<yh; i++)    //将边缘赋值为1
    {   
        a[i][0]=1;
        a[i][i]=1;
    }
    
    for(int i=2; i<yh; i++)    //相加赋值
        for(int j=1; j<=i-1; j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    
    for(int i=0; i<yh; i++)    //打印三角
    {   
        for(int j=0; j<i+1; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    
    return 0;
}
