#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//for循环控制变量的取值采用“前闭后开区间”写法
//for(i=0; i<10; i++)
//{ }
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int i = 0;
	for (i = 0; i < 10; i++)
	//不建议写成"i <= 9"
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
*/
/*
//for循环的变种
int main()
{
	for (;;)
	//for循环的判断部分省略意味这个判断会恒成立
	//但是不建议随便乱省略
	{
		printf("hehe\n");
	}
	//死循环打印"hehe"

	return 0;
}
*/
//以下这种写法：
//for (int i = 0; i < 10; i++)
//{ }
//在C99语法中才支持了直接将int i 插入for的写法
//同时C++中支持这种写法
//在有些编译器中可能编不过去

/*
//多个变量控制循环也是可以的：
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
//以下循环多少次？
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
	//因为中间是赋值而不是判断
	//0为假		
	//所以不循环
		printf("hehe\n");

	return 0;
}
*/

//do...while()循环：
//do
//	循环语句;
//while(表达式);
//即先执行语句再判断
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
	//打印2 3 4 6

	return 0;
}
*/
/*
//计算n的阶乘（输入的量不要太大，不考虑溢出的问题）
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
//或者：
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
//计算 1!+2!+3!+...+10!
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
//太复杂了可以优化成这样↓
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
//在一个有序数组中查找具体的某个数字n
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
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}
//这样效率太慢了
//可以用二分查找
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
			printf("找到了，下标是：%d", sum);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}
*/

//编写代码，演示多个字符从两端移动，向中间汇聚
//效果如下：
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