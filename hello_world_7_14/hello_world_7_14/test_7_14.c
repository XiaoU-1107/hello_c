#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//forѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//for(i=0; i<10; i++)
//{ }
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	for (i = 0; i < 10; i++)
	//������д��"i <= 9"
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/
/*
//forѭ���ı���
int main()
{
	for (;;)
	//forѭ�����жϲ���ʡ����ζ����жϻ�����
	//���ǲ����������ʡ��
	{
		printf("hehe\n");
	}
	//��ѭ����ӡ"hehe"

	return 0;
}
*/
//��������д����
//for (int i = 0; i < 10; i++)
//{ }
//��C99�﷨�в�֧����ֱ�ӽ�int i ����for��д��
//ͬʱC++��֧������д��
//����Щ�������п��ܱ಻��ȥ

/*
//�����������ѭ��Ҳ�ǿ��Եģ�
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}

	return 0;
}
*/
/*
//����ѭ�����ٴΣ�
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	//��Ϊ�м��Ǹ�ֵ�������ж�
	//0Ϊ��		
	//���Բ�ѭ��
		printf("hehe\n");

	return 0;
}
*/

//do...while()ѭ����
//do
//	ѭ�����;
//while(���ʽ);
//����ִ��������ж�
/*
int main()
{
	int i = 1;

	do
	{
		i++;
		if (i == 5)
			continue;
		if (i == 7)
			break;

		printf("%d ", i);
	} 
	
	while (i <= 10);
	//��ӡ2 3 4 6

	return 0;
}
*/
/*
//����n�Ľ׳ˣ����������Ҫ̫�󣬲�������������⣩
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	j = i--;
//	for (; i > 1; i--)
//		j = j * i;
//	printf("%d", j);
//
//	return 0;
//}
//���ߣ�
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);

	return 0;
}
*/
/*
//���� 1!+2!+3!+...+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//
//	return 0;
//}
//̫�����˿����Ż���������
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;

	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);

	return 0;
}
*/
/*
//��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}
//����Ч��̫����
//�����ö��ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0; int right = sz - 1;
	int sum = 0;

	while (left <= right)
	{
		if (arr[(left + right) / 2] < k)
			left = (left + right) / 2 + 1;
		else if (arr[(left + right) / 2] > k)
			right = (left + right) / 2 - 1;
		else
		{
			sum = (left + right) / 2;
			printf("�ҵ��ˣ��±��ǣ�%d", sum);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}
*/

//��д���룬��ʾ����ַ��������ƶ������м���
//Ч�����£�
//###########
//i#########n
//i #######an
//i l#####wan
//i lo###awan
//i lov# awan
//i love awan
int main()
{
	char arr1[] = "i love awan";
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	char arr2[20];

	int i = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		arr2[i] = '#';
	}

	int left = 0; int right = sz - 1;
	for (i = 1; i <= sz / 2; i++)
	{

		
	}

	return 0;
}