/**********************************
���򣺲�������Ϸ
���ߣ�bluix0
ʱ�䣺2025.3.6
 **********************************/

//̫��������д��һ��Դ�ļ��У���ʱ���˶�д����������������һ�·�

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 100
#define MIN_NUM 1


void clear(void)
{
	while (getchar() != '\n');
}


int main()
{
	int guessnumber, makenumber,num=1;
	char reply;
	srand(time(NULL));
	makenumber =( rand() % (MAX_NUM - MIN_NUM + 1) )+ MIN_NUM;
	printf("��ʼ�����֣�����һ��������[%d,%d]֮������֣�\n",MIN_NUM,MAX_NUM);
	while (scanf_s("%d", &guessnumber) != 1)
	{
		printf("������Ч��������һ������\n");
		clear();
	}
	while(guessnumber!=makenumber)
	{
		if (guessnumber > makenumber)
			printf("��µ�̫���ˣ�\n");
		else
			printf("��µ�̫С�ˣ�\n");
		if (num >= 10)
		{
			printf("�Ƿ����������y/n or Y/N\n");
			clear();
			while (scanf_s(" %c", &reply, 1) != 1 || (reply != 'y' && reply != 'Y' && reply != 'n' && reply != 'N'))
			{
				printf("������Ч�������� 'y/Y' ������ 'n/N' �˳���\n");
				clear();
			}
			if (reply == 'n' || reply == 'N')
			{
				printf("��ȷ��������%d\n��Ϸ����", makenumber);
				return 0;
			}
			else
				printf("��ѡ����%c����������룺\n",reply);
		}
		else
			printf("���������룺\n");
			while (scanf_s("%d", &guessnumber) != 1)
			{
				printf("������Ч��������һ��������\n");
				clear();
			}
				num++;
	}
	printf("��¶��ˣ����Դ���Ϊ��%d",num);
	return 0;
	}