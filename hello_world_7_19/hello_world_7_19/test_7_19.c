#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
void test(void)
//��������Ӹ�void�������ú���ʱ�����˲����ͻᱨ���棬����Ȼ��������
{
	printf("hehe\n");
}

int main()
{
	test();
	test(100);

	return 0;
}
*/
/*
int main(void)
{

	return 0;
}
//�˴���ȷ��˵����main��������Ҫ����
//������main����ʱ�в�����
//

//main������3������
int main(int argc, char* argc[], char* envp[])
{

	return 0;
}
//�����˽�
*/

////�����������붨��
//int Add(int x, int y);

#include "Add.h"
//�Լ�д��ͷ�ļ���˫����
//�������ǰ�ͷ�ļ������ݿ�������

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}

//int Add(int x, int y)
//{
//	return x + y;
//}

//����������main��������ᱨ���� "Add"δ����
//������ǰ��������� "int Add(int x, int y);"
//
//1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ�����������������
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
//3.����������һ��Ҫ����ͷ�ļ���
//��Add.c ��ͷ�ļ�Add.h
//ʹ�ú���ǰֻ��Ҫ�ڳ���ǰ���ϸ� #include "Add.h" ��OK
//
//�����������ĺô���
//1.Э���ĽǶ�
//2.ģ�黯��ҵ����
//