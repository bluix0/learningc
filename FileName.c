/**********************************
��������ϰ��1
���ߣ�bluix0
ʱ�䣺2025.2.21
 **********************************/
//�ҳ�һ����ά�����еİ��㡣
// ����λ���ϵ�Ԫ���ڸ���������ڸ�������С��
// Ҳ����û�а��㡣

#include<stdio.h>
#define xnum 3  //������ռ�
#define ynum 3  //��ά����ռ�
int main()
{
    //���붨���ά����
    printf("����%d�����������ǹ���%d*%d��һ�����󣬳����������İ��㣺\n", xnum * ynum, xnum, ynum);
    int arr[xnum][ynum];
    for (int i = 0; i < xnum; i++)
        for (int j = 0; j < ynum; j++)
            scanf_s("%d", &arr[i][j]);


    //��ÿһ���е����ֵ
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


    //��ÿһ�е���Сֵ
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
        printf("û��");


    return 0;
}