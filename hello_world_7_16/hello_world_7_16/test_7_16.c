#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

/*
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
*/

//�ڼ������ѧ�У����������ӳ���
//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ�ж�ϸ�ڵ�����
//��Щ����ͨ��������Ϊ�����

//�������ϱ���û�к�����ֻ���õ��˶��ˣ������˿⺯����

//C���Գ��õĿ⺯����
//1.IO���� - ����������<stdio.h>
//2.�ַ����������� - <string.h>
//3.�ַ���������
//4.�ڴ��������
//5.ʱ��/���ں���
//6.��ѧ����
//7.�����⺯��


//ѧϰ����strcpy
//<string.h>
//�Ķ��ĵ���
//strcpy
//char* strcpy(char* destination, const char* source);
//Copy string
//Copies the C string pointed by source into the array pointed by destination, 
//including the terminating null character(and stopping at that point).
//�������������ӣ�
///* strcpy example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
/*
//�������ַ�������ʼ���ԣ�
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello_world";

	strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}
//���Գɹ�
*/


