#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//����ָ�����
int main()
{
	int a = 10;
	//���ڴ�����4���ֽڣ��洢10
	printf("%p\n", &a);

	//���-->��ַ-->��ַҲ����Ϊָ��
	int* p = &a;
	//p����ָ�����
	//���ָ�루��ַ���ı�������ָ�����
	//int˵��pָ��Ķ�����int���͵�
	//*˵��p��ָ�����

	//char ch = 'w';
	//char* pc = &ch;

	*p = 20;//*�ǽ����ò���������˼��ͨ��p�д�ŵĵ�ַ��
	//�ҵ�p��ָ��Ķ���*p����pָ��Ķ���
	printf("%d\n", a);//20

	return 0;
}
*/
/*
//ָ������Ĵ�С
int main()
{
	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
	//32λ�����ϵĵ�ַ��32bitλ - 4byte
	//64λ�����ϵĵ�ַ��64bitλ - 8byte
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));
	//��Ϊ8

	return 0;
}
*/

/*
//�ṹ��
//��һЩ��һ���������һ�������
//

//ѧ��
struct Stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//����Ҳ���ԣ�
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	//"->" �÷���
	//�ṹ��ָ�����->��Ա��
}

int main()
{
	struct Stu s = { "awan",18,"nan","12345678901" };

	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);

	print(&s);
	//���Ҳ�ܴ�ӡ

	return 0;
}
*/

//define���ǹؼ��֣���Ԥ����ָ��

//���
// 
//C������ �ṹ�� �ĳ����������:
//˳��ṹ��ѡ��ṹ��ѭ���ṹ
// 
//C���Կɷ�Ϊ����������䣺
//1.���ʽ���
//2.�����������
//3.�������
//4.�������
//5.�����

/*
//�������
//����������ڿ��Ƴ����ִ�����̣���ʵ�ֳ���ĸ��ֽṹ��ʽ
//�������ض�����䶨������
//C�����о��ֿ������
int main()
{
	int age = 10;
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("��������\n");
	//}
	////if��������Ҫ������䣬����Ҫ��{ }
	//else
	//	printf("����\n");

	//if (18 <= age < 28)
	//	printf("����\n");
	//�ô���д����
	//�����������ж� "18 <= age" Ϊ�٣�����Ϊ 0
	//���ж� "0 < 28" ���Ϊ��
	//���Ӧ��Ϊ��
	if (18 <= age && age < 28)
		printf("����\n");

	return 0;
}
*/

/*
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}
//�˴������޽��
//��Ϊ���е�else������������if���
//�����������룺
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}
//���ϣ����ӡ��"haha"����Ӧ�����д��
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");

	return 0;
}
*/
/*
//������ ������
//1.���������� �������塢�淶������⣩
//    �罫"firstname" ��Ϊ"first_name" ��"FirstName"
//2.�ո񡢿��С�����
//    �罫"int a=0;" ��Ϊ"int a = 0;"

//if��д��ʽ�ĶԱ�
//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 1;
//	return 0;
//}
//�˴������´���ȼۣ�
int test()
{
	int a = 3;
	if (a == 3)
		return 1;
	else
		return 0;
}
//��������ôд�����Ķ�

int main()
{
	int r = test();
	printf("%d\n", r);

	return 0;
}
*/
/*
int main()
{
	int num = 3;
	if (5 == num)//if (num == 5)
	//������д���������Է�ֹ ����С���ٵ�һ��"=" ʱ���Է���
	//��Ϊ"5 = num" �������ᱨ����"num = 5" ���ᱨ��
		printf("hehe\n");

	return 0;
}
//��˽�һ��������һ���������бȽ�����ý������������
*/

/*
//�ж�һ�����ǲ�������
int main()
{
	int a = 0;
	printf("������һ��������");
	scanf("%d", &a);
	if (0 == (a % 2))
		printf("%d ��һ��ż��\n", a);
	else
		printf("%d ��һ������\n", a);

	return 0;
}
*/
/*
//��� 1 �� 100 ֮�������
int main()
{
	//for(int i = 1; 100 >= i; i++)
	//	if ((i % 2) == 1)
	//	{
	//		printf("%d\n", i);
	//	}
	
	//����

	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}

	return 0;
}
*/

