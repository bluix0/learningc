/**********************************
程序：题目1
编者：bluix0
时间：2025.3.10
**********************************/

//试题描述：
// 给你一列正整数，两端数值相等，中间所有数都大于等于两端数值时，称为一个“凸”
// “凸”的值为中间所有凸出两端部分值的和，要求返回所有“凸”中最大“凸"值
// 例如：1234532，含有两个“凸”
// 一个“凸”为234532，“凸”值为(3 - 2) +(4 - 2) + (5 - 2) + (3 - 2) = 7
// 另一个"凸”3453，“凸”值为(4-3)+(5-3)=3
// 这两个“凸"中，最大“凸”值为7

// 输入格式：
// 两行，第一行为一个正整数n，表示这列正整数的个数；第二行为n个正整数。
//输出格式：
// 最大“凸”值

//输入输出样例：
/*
    输入样例：
    6
    123452
    输出样例：
    6
*/
//数据范围：2≤n≤100, 0≤α≤10E5




#include<stdio.h>
int main() {
    int n, sum = 0, max_num = 0, sum_max = 0;
    //输入
    scanf("%d", &n);
    int num[100] = { 0 };
    for (int i = 1; i <= n; i++)
        scanf("%d", &num[i]);
    //正文
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (num[i] == num[j]) {
                sum = 0;
                for (int k = i + 1; k <= j - 1; k++) {
                    if (num[i] > num[k])
                        break;
                    sum += num[k] - num[i];
                }
            }
            if (sum > sum_max)
                sum_max = sum;
        }
    }
    printf("%d\n", sum_max);
    return 0;
}
