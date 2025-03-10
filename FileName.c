/**********************************
程序：卷积
编者：bluix0
时间：2025.3.10
**********************************/

//A方阵是一个n*n的方阵（二维数组）
//B方阵是一个m*m的方阵
//（m<=n）
//将A和B的第1行第1列元素对齐，
// 在对齐后A的m＊m区域内
// 将A、B对应位置元素相乘然后累加，
// 作为结果矩阵C的元素C[0][0];
// 
//将A的第1行第2列元素和B的左上角元素对齐，
// 对齐后A的m＊m区域内
// 将A、B对应位置元素相乘然后累加，
// 作为结果矩阵C的元素C[0][1]；
// 
// 依次进行下去，你将得到一个结果矩阵C
/*
*输入格式:
    一个整数n，然后是n行n列矩阵A，再一个整数m，然后是m行m列的矩阵B。
*输出格式：
    结果矩阵C
*输入示例：
    5
    1 1 1 0 0
    0 1 1 1 0
    0 0 1 1 1
    0 0 1 1 0
    0 1 1 0 0
    3
    1 0 1
    0 1 0
    1 0 1
*输出示例：
    4 3 4
    2 4 3
    2 3 4
*/

#include<stdio.h>
#define MAXSIZE 20
int main() {
    int m, n, s; //n用于存放A矩阵维数，m用于存放B矩阵维数,s用于存放C矩阵维数。
    int A[MAXSIZE][MAXSIZE], B[MAXSIZE][MAXSIZE], C[MAXSIZE][MAXSIZE] = {0};
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /********Begin***********/
    for (int a = 0; a < n - m + 1; a++)
        for (int b = 0; b < n - m + 1; b++)
            for (int i = a; i < m + a; i++)
                for (int j = b; j < m + b; j++)
                    C[a][b] += A[i][j] * B[i - a][j - b];
    for (int i = 0; i < n - m + 1; i++) {
        for (int j = 0; j < n - m + 1; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    /********End*************/

    return 0;
}