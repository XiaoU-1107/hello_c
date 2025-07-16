#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//比较两个数的大小
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字，用空格分隔：\n");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("%d 比 %d 大\n", a, b);
	}
	else
	{
		if (b > a)
		{
			printf("%d 比 %d 大\n", b, a);
		}
		else
		{
			if (a == b)
			{
				printf("%d 与 %d 一样大\n", a, b);
			}
			else
			{
				printf("输入有误");
			}
		}
	}

	return 0;
}
*/
//md写完才说有else if可以用，艹


/*
//求两个整数的较大值
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数，程序将输出其中的较大值：\n");
	scanf("%d %d", &a, &b);
	int r = Max(a, b);
	printf("%d\n", r);


	return 0;
}
*/

/*
//已知一个函数y=f(x)，当x<0时，y=1；当x=0时，y=0；当x>0时，y=-1
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	printf("%d\n", y);

	return 0;
}
*/

/*
// "/"除号的两端都是整数的时候，执行的是整数除法
// 如果两端只要有一个浮点数，就执行浮点数的除法
int main()
{
	int a = 7 / 2;
	printf("%d\n", a);
	//输出3，即7÷2的整数商

	float b = 7 / 2.0;
	printf("%f\n", b);//注意"%f" 打印的是float类型的数据
	//输出3.500000
	printf("%.1f\n", b);//注意"%.1f" 只打印一位小数的float，点几就是打印几位小数
	//输出3.5

	int c = 7 % 2;
	//取模   且两端只能是整数
	printf("%d\n", c);
	//输出1，即7÷2的余数
	

	return 0;
}
*/

//
//移位操作符：
//包括 左移">>" 和 右移"<<"
// （涉及二进制）
//

/*
//赋值操作符
int main()
{
	int a = 0;//初始化
	a = 20;//赋值

	a = a + 3;//a=23

	a += 3;//a=26

	a -= 3;//a=23
	//以及"*=" , "/=" , "&=" , "^=" , "|=" , ">>=" , " <<="
	

	return 0;
}
*/

//单目操作符
// 
//如下：
//a + b;
//"a"和"b"是两个操作数
//"+"则是双目操作符
//而单目操作符则是  只有一个操作数的操作符
//
//! - 逻辑反操作
//- - 负值
//+ - 正值
//& - 取地址
//sizeof - 操作数的类型长度（以字节为单位）
//~ - 对一个数的二进制按位取反
//-- - 前置、后置--
//++ - 前置、后置++
//(类型) - 强制类型转换
//

/*
//在C语言中
//0表示假
//非0表示真
int main()
{
	int flag = 0;//0为假
	if (!flag)//此时!flag为真，则通过
	{
		printf("真");
	}

	return 0;
}
*/

/*
//sizeof - 操作数的类型长度（以字节为单位）
int main()
{
	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 如此即计算数组的元素个数

	return 0;
}
*/

/*
//++ - 前置、后置++
//即int b = a; a = a+1;
int main()
{
	int a = 10;
	int b = a++;
	//后置++，先使用，后++
	//即int b = a; a = a+1;

	printf("%d\n", b);//10
	printf("%d\n", a);//11

	int c = 10;
	int d = ++c;
	//前置++，先++，后使用
	//即c = c+1; int d = c；

	printf("%d\n", c);//11
	printf("%d\n", d);//11


	return 0;
}
*/

/*
//(类型) - 强制类型转换
int main()
{
	int a = 3.14;
	//3.14 字面浮点数，编译器默认理解为double类型
	a = (int)3.14;
	//将3.14强制转换为整型，所以把int放在括号里
	printf("%d\n", a);//3

	return 0;
}
*/

//关系操作符
// >  >=  <  <=  !=  ==

//逻辑操作符
//&& - 与
//|| - 或

/*
//条件操作符
//exp1 ? exp2 : exp3
//即三个表达式的三目操作符
//如果表达式1为真，则输出表达式2
//如果表达式1为假，则输出表达式3
//
//如下（输出a和b中的较大值）：
int main()
{
	int a = 10;
	int b = 20;
	int r = a > b ? a : b;
	//a>b不成立，则输出b，r被赋值b
	printf("%d\n", r);

	return 0;
}
*/

/*
//逗号表达式
//exp1, exp2, exp3. ...expN
//即由逗号隔开的一串表达式
//特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);
	//       c = 8      a = 28     5
	//则d = 5
	printf("%d\n", d);

	return 0;
}
*/

//下标引用、函数调用和结构成员
//[]        ()         .  ->
//下标引用操作符 []
//函数调用操作符 ()

//常见关键字：
//auto - 自动
//break - 跳出循环
//continue - 继续（循环）
//const - 常属性
//signed - 有符号的
//unsigned - 无符号的
//enum - 枚举
//struct - 结构体
//union - 联合体（共用体）
//extern - 声明外部符号
//register - 寄存器
//static - 静态的
//return - 函数返回值
//void - 无（函数的返回类型、函数参数）
//sizeof - 计算大小
//typedef - 类型重命名
//

//变量的命名
//1.有意义
//2.必须是字母、数字、下划线组成，不能有特殊字符，不能以数字开头
// （不建议用中文起名）
//3.变量名不能是关键字
