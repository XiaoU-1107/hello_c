#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��ʽ������
//��ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ����
//�������ڴ浥Ԫ�������Խ���ʽ��������ʽ����������������ɺ���Զ�������
//�����ʽ����ֻ�ں�������Ч
//
//�β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//�����ĵ��ã�
//1.��ֵ���� - �������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//2.��ַ���� - �Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
/*
void Swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void Swap2(int* px, int* py)
{
	int z = *px; //z = a
	*px = *py;   //a = b
	*py = z;     //b = z
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("����ǰ��a=%d b=%d\n", a, b);
	//��ֵ����
	Swap1(a, b);
	//��ַ����
	Swap2(&a, &b);
	printf("������a=%d b=%d\n", a, b);

	return 0;
}
*/
/*
//��ӡ100��200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//���ж��ٸ�
//
//	for (i = 100; i <= 200; i++)
//	{
//		//��i�Գ�2��i - 1֮�������
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//�Ż��汾��
//1.ֻҪ���㵽i �Ŀ�ƽ���Ϳ�����
//2.ż������������
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//���ж��ٸ�
//
//	for (i = 101; i <= 200; i+=2)
//	//��101��ʼÿ�μ�2 ������
//	{
//		//��i�Գ�2��i - 1֮�������
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		//sqrt�ǿ�ƽ������Ҫ������ѧ�⺯�� <math.h>
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//�����汾��
#include <math.h>

//�ж��Ƿ�Ϊ����
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;

	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}
*/
/*
//��ӡ1000��2000��֮�������
//���ܱ�4���������Ҳ��ܱ�100���� ���� �ܱ�400������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//�򻯷�����
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ( ( (year % 4 == 0) && (year % 100 != 0) ) || (year % 400 == 0) )
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}
//����д����
//�����귵��1�������򷵻�0
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}

	return 0;
}
*/
/*
//дһ��������ʵ��һ��������������Ķ��ֲ���
int binary_search(int arr[], int k, int sz)//�β�arr����ȥ�����飬������ָ�����
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
			//�ҵ��˷����±�
		}
	}

	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�ҵ��� �����±�
	//�Ҳ��� ����-1
	int ret = binary_search(arr, k, sz);
	//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
	//��������������
	//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}
*/
/*
//��������
//��C99��������bool������������
//������ʾ��ٵı���
#include <math.h>
#include <stdbool.h>

bool is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return false;
		}
	}

	return true;
}
//ת�����壬��ʵfalse��0��true��1

int main()
{
	int i = 0;
	int count = 0;

	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}
*/
/*
//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 1;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);

	return 0;
}
*/

//������Ƕ�׵���
//��������Ƕ�׵��ã����ǲ���Ƕ�׶���

//��������ʽ����
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//��ʽ����
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}
//�ٸ��������ʽ�������ӣ�
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
	//����ǣ�"4321"

	return 0;
}

