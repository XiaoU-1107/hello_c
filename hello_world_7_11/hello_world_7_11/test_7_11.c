#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
int main()
{
	int ch = getchar();
	//"getchar" ָ�Ӽ��̻�ȡһ���ַ����룬�����س�����
	//�����ȡ���󣬻��������ļ���������᷵��"EOF"
	//"EOF"��ʵ��"end of file"
	//EOF;
	//ͨ���Ҽ� ת������ ���Կ��� "#define EOF    (-1)"

	printf("%c\n", ch);
	putchar(ch);

	return 0;
}//��ӡ����������ַ�
*/
/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//����EOFʱֹͣ
	{
		putchar(ch);
	}

	return 0;
}
//����Ч�����ظ���ӡ������ַ���������Ctrl+Z ��ֹͣ����
//a
//a
//b
//b
//^ Z
//��Ϊ�������"a" �ͻس���"\n" ����putchar���ȴ�ӡ���뻺�����ڵ�"a",�ٴ�ӡ"\n"
//��˻��Զ�����
*/

//��һ������
//����������һ���ַ���
int main()
{
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password);//��ʵ������scanf��ȡ�����ʣ�

	//getchar();//��ȡ��\n, ������ô�������뻺�����е�\n�ᱻ�������ret��
	//����scanf�����뻺�����������ո�Ҳ��ֹͣ��������뻺������
	//���ܻ��кܶ���ڿո������ַ�
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//������ȫ�������

	printf("��ȷ�����루Y/N����>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}