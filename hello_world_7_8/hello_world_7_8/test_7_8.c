#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//�ؼ��� typedef 
//����˼�������Ͷ��壬Ӧ���Ϊ����������
//���磺
typedef unsigned int uint;//��unsigned int ��Ϊuint

int main()
{
	unsigned int num = 0;
	//unsigned int ̫���ˣ�����"typedef unsigned int uint" 
	//����������Ϊuint
	uint num2 = 1;
	//�˴�"uint" �ȼ���"unsigned int"

	return 0;
}
*/
/*
//�����磺
typedef struct Node//����"struct Node" ��
{
	int data;
	struct Node* next;
}Node;//��ΪNode

int main()
{
	struct Node n;
	Node n2;//�˴���"Node" ��"struct Node" �ȼ�

	return 0;
}
*/

//static - ��̬
//�����������α����ͺ���
//1.���ξֲ�����
//  ����������ջ���Ƶ���̬����Ӱ��������������ڣ��������ڱ䳤���ͳ������������һ����
//2.����ȫ�ֱ���
//3.���κ���
//���磺
/*
void test()//����������Ҫ�κη�������ʱ�� void
{
	static int a = 1;//static����a�󣬺���ִ�н���ʱa���ᱻ����
	//���ڵڶ��ε���ʮ��ִ�к���ʱ����������
	//���ԣ�
	//static���ξֲ�������ʱ�򣬾ֲ���������������Ҳ��������
	//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ��
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}//2 3 4 5 6 7 8 9 10 11 
*/
/*
//static����ȫ�ֱ���
//�˴����Ķ�test2.c
//�����ⲿ���ţ���test2.c�е�g_val��
extern int g_val;

int main()
{
	printf("%d\n", g_val);

	return 0;
}
*/

/*
//static���κ���
//�˴����Ķ�test2.c
//int Add(int x, int y)
//{
//	return x + y;
//}

//����Add�� test2.c�У�ʹ��ʱ��ý�������
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int z = Add(a, b);
	printf("%d\n", z);
	return 0;
}
//�����Ǿ����ⲿ�������Ե�
*/

/*
//register - �Ĵ���
//�����ϵĴ洢�豸��
//�����ϵ��� �ٶȱ��� �ռ��� ��۱�ͣ�
//�Ĵ��������ɵ�CPU�ϣ� --> ��ȡ�ٶ���죡
//���ٻ��棨cache��
//�ڴ�
//Ӳ��

//�����Ĵ�������
int main()
{
	register int num = 3;
	//���齫 3 ����ڼĴ�����

	return 0;
}
*/

//��#define ���峣���ͺ�
/*
//1.define �����ʶ������
#define NUM 100
//NUM����һ������
int main()
{
	printf("%d\n", NUM);
	//��������������ӡ

	int n = NUM;
	printf("%d\n", n);
	//�������Ը�������ֵ

	int arr[NUM] = { 0 };
	//�������ڴ�������

	return 0;
}
*/
/*
//2.define �����
#define ADD(x,y) ((x)+(y))
//       |   |      |
//     ���� ����  ����

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	//"ADD(a, b)"�ȼ���"((x)+(y))"
	//��ֻ����滻
	printf("%d\n", c);

	return 0;
}
*/

//ָ��
//�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ
//һ���ڴ浥Ԫ�Ĵ�СΪһ���ֽ�
//ÿ���ڴ浥Ԫ����һ�����
int main()
{
	int a = 10;//���ڴ�����4���ֽڣ��洢10
	&a;//ȡ��ַ������
	printf("%p\n", &a);
	//��ӡ��ַ ��"%p"

	return 0;
}