#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		//ASCIIֵ�г�������0��9���ַ�
			continue;//����
		putchar(ch);
	}
	//ֻ��ӡ�����ַ�
	return 0;
}
*/

/*
//'a';��ASCIIֵ��97
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 97);
	//��ӡ��
	//a
	//a

	return 0;
}
*/
/*
//ת������ASCII��Ϊ��Ӧ�ַ����������
//73, 32, 99 ,97 ,110 ,32 ,100 ,111 ,32 ,105 ,116 ,33
//�����Կո����
int main()
{
	int arr[] = { 73, 32, 99 ,97 ,110 ,32 ,100 ,111 ,32 ,105 ,116 ,33 };
	//������char��int����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	while(i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	//��ӡ��I can do it!

	return 0;
}
*/
/*
//ָ������������
//����һ���˵ĳ������ڣ����������е��ꡢ�¡��շֱ����
//���룺20130225
//�����year=2013
//      month=02
//      date=25
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);

	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	//"%02d"ָ��"0"���䲹������λ
	printf("date=%02d\n", date);

	return 0;
}
*/
/*
//��������һ��ѧ����ѧ�ţ��Լ����ƣ�C���ԣ���ѧ��Ӣ��ɼ�
//����Ļ�������ѧ����ѧ�ţ����Ƴɼ�
//��ע������ɼ�ʱ��������������ұ���2λС����
//���룺17140216;80.845,90.55,100.00
//�����The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
int main()
{
	int id = 0;
	float c = 0.0f;
	//���ֱ��д"0.0"�ᱻ��Ϊ��double���͵�
	//��һ��"f"ָfloat����
	//����Ҫ�󲻸���float
	//����Ҫ�����double
	float math = 0.0f;
	float eng = 0.0f;

	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);

	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
	//"%.2f"ָС���������λ

	return 0;
}
*/
/*
//���"printf("Hello world!")"�ķ���ֵ
int main()
{
	int n = printf("Hello world!");
	//����һ�����֣�����ӡ�ĳ���
	//����������ʱ������һ������
	printf("\n%d\n", n);

	return 0;
}
*/
/*
//���һ�����仰��
//printf("Hello world!\n");
//cout << "Hello world!" << endl;
int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;");

	return 0;
}
*/

//�ҳ��ĸ����е������
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	int max = arr[0];
	for (i = 1, i <= ((sizeof(arr)) / (sizeof(arr[0]))-1), i++;)
	{
		if (arr[i] >= max)
			max = arr[i];
	}

	printf("%d", max);

	return 0;
}