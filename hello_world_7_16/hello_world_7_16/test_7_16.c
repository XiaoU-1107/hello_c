#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>


//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��������ȡ���ػ�
//��cmd�У�"shutdown -s -t 60" ��ʾ��60���ػ�
//"shutdown -a"��ʾȡ���ػ�
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		printf("��������\n");
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}
