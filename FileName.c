#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0;
    int num = 1;
    int sign = 1;
    double sum = 0;
    double term = 0;
    double f(int x);
    printf("����һ������ֵ�������������ֵ��\n");
    scanf_s("%d", &a);
    do
    {
        term = pow(a, num) / f(num) * sign;
        sign = -sign;
        sum += term;
        num += 2;
    } while (fabs(term) >= 1e-5);
    printf("%d���ȵ�����ֵΪ%lf", a, sum);
    return 0;
}

double f(int x)
{
    double y = 1;
    for (int i = 1; i <= x; i++)
        y = y * i;
    return(y);
}