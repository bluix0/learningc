/**********************************
����ͳ���ַ����и����ַ�����
���ߣ�bluix0
ʱ�䣺2025.3.1
 **********************************/

//��һƪ���£�����3�����֣�
// ÿ����80���ַ���
// Ҫ��ֱ�ͳ�Ƴ�����
// Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��ĸ�����

#include<stdio.h>   //fgets����ͷ�ļ�
#include<ctype.h>   //isupper,islower,isspace����ͷ�ļ�
int main()
{
    for (int m = 0; m < 3; m++)
    {
        printf("�������%d�仰\n", m + 1);
        char arr[100];
        fgets(arr, sizeof(arr), stdin);
        int up = 0, lo = 0, num = 0, spa = 0, oth = 0;
        
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (isupper(arr[i]))
                up++;
            else if (islower(arr[i]))
                lo++;
            else if (isdigit(arr[i]))
                num++;
            else if (isspace(arr[i]))
                spa++;
            else
                oth++;
        }

        printf("��д��ĸ��%d��\n", up);
        printf("Сд��ĸ��%d��\n", lo);
        printf("������%d��\n", num);
        printf("�ո���%d��\n", spa - 1);      //��һ����Ϊfgets����ʱ�����ַ����������\n��isspace��������ȡһ��\n
        printf("������ĸ��%d��\n", oth);

        up = lo = num = spa = oth = 0;      //ͳ�����һ�仰����ʼ��ֵ
    }
    return 0;
}