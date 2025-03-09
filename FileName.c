/**********************************
程序：猜数字游戏2
编者：bluix0
时间：2025.3.8
 **********************************/

#include <stdio.h>
#include <math.h>

 // 判断素数
int fun2(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// 生成回文数
long long fun1(int n) {
    int digits[10], len = 0;
    int temp = n;

    // 拆解 n 的每一位
    while (temp > 0) {
        digits[len++] = temp % 10;
        temp /= 10;
    }

    // 构造回文数
    long long palindrome = n;
    for (int i = 0; i < len; i++) {
        palindrome = palindrome * 10 + digits[i];
    }

    return palindrome;
}

int main() {
    int n;
    scanf_s("%d", &n);

    long long revn = fun1(n); // 生成回文数
    int flag = fun2(revn); // 判断是否是素数

    if (flag)
        printf("prime\n");
    else
        printf("noprime\n");

    return 0;
}
