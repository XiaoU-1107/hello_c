#define _CRT_SECURE_NO_WARNINGS
//一定要在源文件的第一行放
//第一次写代码诶
//斜杆原来是注释吗我记得py用的是#
#include <stdio.h>
//引用库
//int main()//括号里可以加个void表示没有参数
//{
//	printf("520\n");
//	printf("1314\n");
//	printf("AWan\n");
//	printf("wo xi fu er\n");
//	printf("mu~a\n");
//	return 0;
//
//int main()
//{
//	printf("%zu\n",sizeof(char));//字符数据类型
//	printf("%zu\n",sizeof(short));//短整型
//	printf("%zu\n",sizeof(int));//整形
//	printf("%zu\n",sizeof(long));//长整型
//	printf("%zu\n",sizeof(long long));//更长的整形
//	printf("%zu\n",sizeof(float));//单精度浮点数
//	printf("%zu\n",sizeof(double));//双精度浮点数
//
//	return 0;
//}
//
//int b = 20;//全局变量-{}外部定义的变量
//
//int main()
//{
//	int age = 20;//局部变量-{}内部定义的变量
//	double print = 66.6;
//
//	return 0;
//}
//
//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);//当全局变量和局部变量名字相同的情况下，局部优先
//
//	return 0;
//}
//但是建议不要将全局和局部变量的名字起一样的

//写一个代码，计算两个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);//scanf 是一个输入函数
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//int a = 10;
//声明来自外部的符号
//extern int a;

//void test()
//{
//	printf("test-->%d\n", a);
//}

int main()
{
	{
		int a = 100;
		printf("a=%d\n", a);
	}
	int a = 10;
	printf("a=%d", a);

	return 0;
}
