                                              /**************************************
                                                 ***      ����Ϊ�������������     ***
                                                    ***   ���ߣ�bluix                    ***
                                                 ***      ʱ�䣺2025.2.25                 ***
                                               **************************************/
 /*���
*{
*	//��ʮ����������
*	int a[10];												//����װ��ʮ������
*	for (int i=0;i<9;i++){
*		for (int j=i+1;j<=9;j++){
*			if(a[i]>a[j]){								//�ҵ���С�����������������һλ
*				int x =a[i];
*				a[i]=a[j];
*				a[j]=x;
*			}
*		}
*	}
*	for(int k=0;k<=9;k++)
*	printf("%d",a[k]);
*}
*/
#include<stdio.h>
int main()
{	
	//��������ļ�������������i
	int a[1000],i;
	printf("�����뼸������\n");
	for (i = 0;i <= 1000;i++)
	{
		scanf_s("%d", &a[i]);
		if (getchar() == '\n')
			break;
	}
	
	
	//ѡ��˳�򣬸�o��ֵ
	int o;
	printf("��Ҫ��С�������У�����1\n��Ҫ�Ӵ�С���У�����0\n");
	scanf_s("%d", &o);


	//��ʼ����
	for (int j = 0;j < i;j++)
	{
		for (int k = j + 1;k <= i;k++)
		{
			if (a[j] > a[k])
			{
				int x = a[j];
				a[j] = a[k];
				a[k] = x;
			}
		}
	}
	if (o)
	{
		for (int l = 0;l <= i;l++)
			printf("%d ", a[l]);
	}
	else
	{
		for (int l = i;l >= 0;l--)
			printf("%d ", a[l]);
	}
	return 0;
}