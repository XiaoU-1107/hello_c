#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//关键字 typedef 
//顾名思义是类型定义，应理解为类型重命名
//例如：
typedef unsigned int uint;//将unsigned int 简化为uint

int main()
{
	unsigned int num = 0;
	//unsigned int 太长了，可用"typedef unsigned int uint" 
	//将其重命名为uint
	uint num2 = 1;
	//此处"uint" 等价于"unsigned int"

	return 0;
}
*/
/*
//再例如：
typedef struct Node//即将"struct Node" 简化
{
	int data;
	struct Node* next;
}Node;//简化为Node

int main()
{
	struct Node n;
	Node n2;//此处的"Node" 与"struct Node" 等价

	return 0;
}
*/

//static - 静态
//可以用来修饰变量和函数
//1.修饰局部变量
//  （将变量从栈区移到静态区，影响变量的生命周期，生命周期变长，和程序的生命周期一样）
//2.修饰全局变量
//3.修饰函数
//例如：
/*
void test()//当函数不需要任何返回类型时用 void
{
	static int a = 1;//static修饰a后，函数执行结束时a不会被销毁
	//且在第二次到第十次执行函数时均跳过此行
	//所以，
	//static修饰局部变量的时候，局部变量出了作用域也不会销毁
	//本质上，static修饰局部变量的时候，改变了变量的存储位置
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
//static修饰全局变量
//此处请阅读test2.c
//声明外部符号（在test2.c中的g_val）
extern int g_val;

int main()
{
	printf("%d\n", g_val);

	return 0;
}
*/

/*
//static修饰函数
//此处请阅读test2.c
//int Add(int x, int y)
//{
//	return x + y;
//}

//函数Add在 test2.c中，使用时最好进行声明
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int z = Add(a, b);
	printf("%d\n", z);
	return 0;
}
//函数是具有外部链接属性的
*/

/*
//register - 寄存器
//电脑上的存储设备：
//（从上到下 速度变慢 空间变大 造价变低）
//寄存器（集成到CPU上） --> 读取速度最快！
//高速缓存（cache）
//内存
//硬盘

//创建寄存器变量
int main()
{
	register int num = 3;
	//建议将 3 存放在寄存器中

	return 0;
}
*/

//用#define 定义常量和宏
/*
//1.define 定义标识符常量
#define NUM 100
//NUM则变成一个常量
int main()
{
	printf("%d\n", NUM);
	//常量可以正常打印

	int n = NUM;
	printf("%d\n", n);
	//常量可以给变量赋值

	int arr[NUM] = { 0 };
	//可以用于创建数组

	return 0;
}
*/
/*
//2.define 定义宏
#define ADD(x,y) ((x)+(y))
//       |   |      |
//     宏名 参数  宏体

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	//"ADD(a, b)"等价于"((x)+(y))"
	//宏只完成替换
	printf("%d\n", c);

	return 0;
}
*/

//指针
//内存会划分为一个个的内存单元
//一个内存单元的大小为一个字节
//每个内存单元都有一个编号
int main()
{
	int a = 10;//向内存申请4个字节，存储10
	&a;//取地址操作符
	printf("%p\n", &a);
	//打印地址 用"%p"

	return 0;
}