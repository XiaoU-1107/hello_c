#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//找出四个数中的最大数
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
//或者
int main()
{
	int i = 1;
	int n = 0;
	int max = 0;
	//假设第一个元素是最大值
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
//给定一个球的半径，计算其体积
//π = 3.1415926
//输出：小数点后保留3位
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
	//0.0默认是double类型，所以要加一个f

	return 0;
}
*/
/*
//计算BMI指数
int main()
{
	int weight = 0;//体重（公斤）
	int high = 0;//身高（厘米）
	scanf("%d %d", &weight, &high);

	//用体重公斤数除以身高米数平方
	float bmi = weight / (high / 100.0) / (high / 100.0);
	printf("%.2f\n", bmi);

	return 0;
}
*/

//for循环
//打印一到十
int main()
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	//初始化部分;条件判断部分;调整部分
	{
		if (i == 5)
			break;

		printf("%d ", i);
	}

	return 0;
}