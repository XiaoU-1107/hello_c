#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//形式参数：
//是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化
//（分配内存单元），所以叫形式参数。形式参数当函数调用完成后就自动销毁了
//因此形式参数只在函数中有效
//
//形参实例化之后其实相当于实参的一份临时拷贝
//对形参的修改不会影响实参

//函数的调用：
//1.传值调用 - 函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参
//2.传址调用 - 把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
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

	printf("交换前：a=%d b=%d\n", a, b);
	//传值调用
	Swap1(a, b);
	//传址调用
	Swap2(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}
*/
/*
//打印100到200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//数有多少个
//
//	for (i = 100; i <= 200; i++)
//	{
//		//拿i试除2到i - 1之间的数字
//		int flag = 1;//flag是1，表示是素数
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
//优化版本：
//1.只要计算到i 的开平方就可以了
//2.偶数不会是素数
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//数有多少个
//
//	for (i = 101; i <= 200; i+=2)
//	//从101开始每次加2 即奇数
//	{
//		//拿i试除2到i - 1之间的数字
//		int flag = 1;//flag是1，表示是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		//sqrt是开平方，需要引用数学库函数 <math.h>
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

//函数版本：
#include <math.h>

//判断是否为素数
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
//打印1000到2000年之间的闰年
//（能被4整除，并且不能被100整除 或者 能被400整除）
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
//简化方法：
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
//函数写法：
//是闰年返回1，不是则返回0
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
//写一个函数，实现一个整形有序数组的二分查找
int binary_search(int arr[], int k, int sz)//形参arr看上去是数组，本质是指针变量
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
			//找到了返回下标
		}
	}

	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//找到了 返回下标
	//找不到 返回-1
	int ret = binary_search(arr, k, sz);
	//数组传参实际上传递的是数组首元素的地址
	//而不是整个数组
	//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}

	return 0;
}
*/
/*
//布尔类型
//在C99中引入了bool（布尔）类型
//用来表示真假的变量
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
//转到定义，其实false是0，true是1

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
//写一个函数，每调用一次这个函数，就会将num的值增加1
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

//函数的嵌套调用
//函数可以嵌套调用，但是不能嵌套定义

//函数的链式访问
//把一个函数的返回值作为另外一个函数的参数
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}
//举个经典的链式访问例子：
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	//printf函数的返回值是打印在屏幕上字符的个数
	//结果是："4321"

	return 0;
}

