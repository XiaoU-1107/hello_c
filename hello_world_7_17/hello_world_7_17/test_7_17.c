#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//һ�������У������ж��.c�ļ�������ֻ����һ��main����

/*
//ѧϰ����memset
//<string.h>
//�Ķ��ĵ���
//void* memset(void* ptr, int value, size_t num);
//Fill block of memory
//Sets the first num bytes of the block of memory pointed by ptr 
//to the specified value(interpreted as an unsigned char).
//��˼�Ǵ�ptr���λ�ÿ�ʼ�������num���ֽ��������ó�����valueֵ
//���ӣ�
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}
//���ԣ�
int main()
{
	char arr[20] = "hello_world";
	char arr2[20] = "hello_world";

	memset(arr, 'x', 5);
	printf("%s\n", arr);

	//��wor�ĳ�yyy��
	memset(arr2 + 6, 'y', 3);
	printf("%s\n", arr2);
	//arr2ƫ�������ַ�������wǰ��������3���ַ���Ϊy

	return 0;
}
//���Գɹ�
*/
/*
//��ѧmemmove:
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	//��str��15λ����11���ַ����ƣ���"very useful."����str��20λ������11���ַ����ɸ�����
//	puts(str);
//	//���"memmove can be very very useful."
//	return 0;
//}
//���ԣ�
int main()
{
	char arr[] = "hello_world__7_17";
	memmove(arr + 6, arr, 11);
	//ע��"11"���������Ȼ�ͻ�������

	printf("%s\n", arr);

	return 0;
}
*/
/*
//�Զ��庯��
//�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ�������
//�ٸ����ӣ�дһ�����������ҳ����������е����ֵ��
int get_max(int x, int y)
{
	return (x > y ? x : y);
}//�����Ķ���

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//�����ĵ���
	int m = get_max(a, b);

	printf("%d\n", m);

	return 0;
}
*/
/*
//дһ���������Խ����������α���������
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	//x��y����ʽ����
//	//�в���ʵ�ε�һ����ʱ������ӵ�ж����Ŀռ�
//	//�����޸��ββ���Ӱ��ʵ��
//	//��˴˴�����
//}

void Swap(int *px, int *py)
//���ȥ��"*" ��ύ��������ַ�����Ƕ�Ӧ��ֵ
{
	int z = *px; //z = a
	*px = *py;   //a = b
	*py = z;     //b = z
	//����a��b��ַ���ܸ�
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("����ǰ��a=%d b=%d\n", a, b);
	//a��b��ʵ�ʲ���
	//Swap(a, b);
	Swap(&a, &b);
	//���ɣ���Ҫ�޸�a��b��ֵʱ�ʹ���ַ

	printf("������a=%d b=%d\n", a, b);

	return 0;
}
*/

