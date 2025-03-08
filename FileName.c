/**********************************
���򣺲�������Ϸ2
���ߣ�bluix0
ʱ�䣺2025.3.8
 **********************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<assert.h>
#define MAX_NUM 1000
#define MIN_NUM 1

//���
void CLEAR(void)
{
	while (getchar() != '\n');
}

//���������
int MAKENUM(void)
{
	srand(time(NULL));
	int n = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
	assert(n >= MIN_NUM && n <= MAX_NUM);
	return n;
}

//�������ݲ����
int PUT_CHECK(void)
{
	int guessnumber;
	while (scanf_s("%d", &guessnumber) != 1)
	{
		printf("������Ч��������һ������\n");
		CLEAR();
	}
	CLEAR();
	return guessnumber;
}

//�жϴ�С
int DECIDE(int guessnumber, int makenumber,int num)
{
	if (guessnumber != makenumber)
	{
		if (guessnumber > makenumber)
			printf("��µ�̫���ˣ�\n");
		else
			printf("��µ�̫С�ˣ�\n");
		return 1;
	}
	else
		printf("��¶���,���Դ���Ϊ%d\n",num);
}

//�ж��Ƿ����
int WEATHER(int num)
{
	char reply;
	CLEAR();
	printf("���Ѿ�������%d���ˣ��Ƿ����������y/n or Y/N\n",num);
	while (scanf_s(" %c", &reply, 1) != 1 || (reply != 'y' && reply != 'Y' && reply != 'n' && reply != 'N'))
	{
		printf("������Ч�������� 'y/Y' ������ 'n/N' �˳���\n");
		CLEAR();
	}
	if (reply == 'n' || reply == 'N')
		return 1;
	else if(reply == 'y' || reply == 'Y')
		return 0;
}

//������
int main()
{
	int makenumber, num = 0;
	printf("��ʼ�����֣�����һ��������[%d,%d]֮������֣�\n", MIN_NUM, MAX_NUM);
	makenumber = MAKENUM();
	while (DECIDE(PUT_CHECK(), makenumber, num) == 1)
	{
		num++;
		if (num >= 10 && num % 10 == 0)
			if (WEATHER(num) == 1)
			{
				printf("�����������ȷ������%d\n", makenumber);
				break;
			}
			else
				printf("��Ϸ���������������֣�\n");
	}
	return 0;
}