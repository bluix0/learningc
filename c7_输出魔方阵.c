/**********************************
程序：输出魔方阵
编者：bluix0
时间：2025.2.28
 **********************************/
#include<stdio.h>
int main()
{
    printf("输入奇数：\n");
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        int arr[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                arr[i][j]=0;   //使用数组必须初始化
        int h=0;
        int w=n/2;
        for(int nn=1; nn<=n*n; nn++)
        {
            arr[h][w]=nn;
            h--;
            w++;
            if (h<0&&w<n)
                h=n-1;
            else if(w>=n&&h>=0)
                w=0;
            else if(h<0&&w>=n)
            {
                h+=2;
                w-=1;
            }
            else if(arr[h][w]!=0)
            {
                h+=2;
                w-=1;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {   if(arr[i][j]<10)
                    printf("%d   ",arr[i][j]);
                else if(arr[i][j]<100)
                    printf ("%d  ",arr[i][j]);
                else if(arr[i][j]<1000)
                    printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("必须是奇数！");
    return 0;
}
