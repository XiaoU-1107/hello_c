#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//�ҳ��ĸ����е������
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	int max = arr[0];
//	i = 1;
//	while(i<4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//����
int main()
{
	int i = 1;
	int n = 0;
	int max = 0;
	//�����һ��Ԫ�������ֵ
	scanf("%d", &max);
	
	while (i < 4)
	{
		scanf("%d", &n);
		if (n > max)
			max = n;
		i++;
	}
	printf("%d\n", max);

	return 0;
}
*/
/*
//����һ����İ뾶�����������
//�� = 3.1415926
//�����С�������3λ
int main()
{
	double r = 0.0;
	double v = 0.0;
	scanf("%lf", &r);

	v = 4/3.0 * 3.1415926 * r * r * r;
	printf("%.3lf\n", v);

	return 0;
}
*/
/*
int main()
{
	float f = 0.0f;
	//0.0Ĭ����double���ͣ�����Ҫ��һ��f

	return 0;
}
*/
/*
//����BMIָ��
int main()
{
	int weight = 0;//���أ����
	int high = 0;//��ߣ����ף�
	scanf("%d %d", &weight, &high);

	//�����ع����������������ƽ��
	float bmi = weight / (high / 100.0) / (high / 100.0);
	printf("%.2f\n", bmi);

	return 0;
}
*/

//forѭ��
//��ӡһ��ʮ
int main()
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	//��ʼ������;�����жϲ���;��������
	{
		if (i == 5)
			break;

		printf("%d ", i);
	}

	return 0;
}