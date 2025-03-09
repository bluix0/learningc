/**********************************
���򣺲�������Ϸ2
���ߣ�bluix0
ʱ�䣺2025.3.8
 **********************************/

#include <stdio.h>
#include <math.h>

 // �ж�����
int fun2(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// ���ɻ�����
long long fun1(int n) {
    int digits[10], len = 0;
    int temp = n;

    // ��� n ��ÿһλ
    while (temp > 0) {
        digits[len++] = temp % 10;
        temp /= 10;
    }

    // ���������
    long long palindrome = n;
    for (int i = 0; i < len; i++) {
        palindrome = palindrome * 10 + digits[i];
    }

    return palindrome;
}

int main() {
    int n;
    scanf_s("%d", &n);

    long long revn = fun1(n); // ���ɻ�����
    int flag = fun2(revn); // �ж��Ƿ�������

    if (flag)
        printf("prime\n");
    else
        printf("noprime\n");

    return 0;
}
