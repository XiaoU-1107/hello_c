#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѧϰ����
// 1.���泣��
// 2.const���εĳ�����
// 3.define����ı�ʶ������
// 4.ö�ٳ���

//int main()
//{
//	//30;
//	//3.14;
//	//��Щ�������ϵĳ���
//	const int a = 10;
//	//a = 20;//�����޸ĳ���a��ֵ
//	printf("a=%d", a);
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;//const���γ����ǳ�����
//	int arr[n] = { 0 };//������[]����Ҫ���ǳ�������˱���
//
//	return 0;
//}

//#define MAX 100
//#define STR "awan"
////define����ı�ʶ������
//
//int main()
//{
//	//MAX = 10;//�������ܸ�
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("a=%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}

//ö�ٳ���
//enum MYFRENDS
//{
//	//ö�ٳ���
//	AWAN,
//	XIEZI,
//	SHIMING,
//	DONGLI
//};
//int main()
//{
//	enum MYFRENDS BRO = DONGLI;
//	printf("%d\n", BRO);//���3���������
//	return 0;
//}

//int main()
//{
//	char MYBOR = "awan";
//	printf("%s\n", MYBOR);
//
//	return 0;	
//}

int main()
{
	char arr[] = "awan";
	//��f10���Լ��ᷢ��arrĩβ����һ����\0��
	//��\0�����ַ����Ľ�����־
	//char arr2[] = { 'a','w','a','n' };
	////�˴���arr2��ĩβ�ޡ�\0��
	printf("%s\n", arr);
	//printf("%s\n", arr2);//��������awan�����������������������̡�
	////�ַ�����ӡ��\0Ϊֹ
	char arr2[] = { 'a','w','a','n','\0' };
	printf("%s\n", arr2);
	//������������\0�����������ӡ


	return 0;
}