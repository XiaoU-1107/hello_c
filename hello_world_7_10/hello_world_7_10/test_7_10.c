#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//switch����ʹ��
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)//�����ڱ���������
	{
	case 1:
	//case���������γ������ʽ��������"1.0","n" ��������"һ"
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	}

	return 0;
}
*/
/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
	//case����Բ���break
	//û��breakʱ��ֱ��������
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
		//��д��ϰ�ߣ���break��Ȼ�ɼӿɲ���
		//������Ǽ���
		//�����Ժ���caseʱ�����׳���

	//�������"8"
	default:
		printf("ѡ�����\n");
		break;
	}

	return 0;
}
*/
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1: n++;
		case 2: m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	//m = 5, n = 3

	return 0;
}
*/
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			//break;
			//break������ѭ��

			continue;
			//continue����������Ĵ��룬����ִ���ж�ѭ��

		printf("%d ", i);
		i++;
	}

	return 0;
}
*/
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;

		printf("%d ", i);
	}

	return 0;
}//2 3 4 6 7 8 9 10 11
*/
//whileѭ���е�
//break ���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

