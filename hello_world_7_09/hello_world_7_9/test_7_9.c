#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//创建指针变量
int main()
{
	int a = 10;
	//向内存申请4个字节，存储10
	printf("%p\n", &a);

	//编号-->地址-->地址也被称为指针
	int* p = &a;
	//p就是指针变量
	//存放指针（地址）的变量就是指针变量
	//int说明p指向的对象是int类型的
	//*说明p是指针变量

	//char ch = 'w';
	//char* pc = &ch;

	*p = 20;//*是解引用操作符，意思是通过p中存放的地址，
	//找到p所指向的对象，*p就是p指向的对象
	printf("%d\n", a);//20

	return 0;
}
*/
/*
//指针变量的大小
int main()
{
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32bit位 - 4byte
	//64位机器上的地址：64bit位 - 8byte
	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));
	//均为8

	return 0;
}
*/

/*
//结构体
//把一些单一类型组合在一起的做法
//

//学生
struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//或者也可以：
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
	//"->" 用法：
	//结构体指针变量->成员名
}

int main()
{
	struct Stu s = { "awan",18,"nan","12345678901" };

	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);

	print(&s);
	//如此也能打印

	return 0;
}
*/

//define不是关键字，是预处理指令

//语句
// 
//C语言是 结构化 的程序设计语言:
//顺序结构、选择结构、循环结构
// 
//C语言可分为以下五类语句：
//1.表达式语句
//2.函数调用语句
//3.控制语句
//4.复合语句
//5.空语句

/*
//控制语句
//控制语句用于控制程序的执行流程，以实现程序的各种结构方式
//它们由特定的语句定义符组成
//C语言有九种控制语句
int main()
{
	int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能饮酒\n");
	//}
	////if语句后若需要多条语句，则须要用{ }
	//else
	//	printf("成年\n");

	//if (18 <= age < 28)
	//	printf("青年\n");
	//该处书写错误
	//编译器会先判断 "18 <= age" 为假，则结果为 0
	//再判断 "0 < 28" 结果为真
	//因此应改为：
	if (18 <= age && age < 28)
		printf("青年\n");

	return 0;
}
*/

/*
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}
//此处代码无结果
//因为其中的else语句会紧跟最近的if语句
//即会这样编译：
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//
//	return 0;
//}
//如果希望打印出"haha"，则应如此书写：
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");

	return 0;
}
*/
/*
//代码风格 的体现
//1.变量的命名 （有意义、规范、易理解）
//    如将"firstname" 改为"first_name" 或"FirstName"
//2.空格、空行、换行
//    如将"int a=0;" 改为"int a = 0;"

//if书写形式的对比
//int test()
//{
//	int a = 3;
//	if (a == 3)
//		return 1;
//	return 0;
//}
//此处与以下代码等价：
int test()
{
	int a = 3;
	if (a == 3)
		return 1;
	else
		return 0;
}
//很明显这么写方便阅读

int main()
{
	int r = test();
	printf("%d\n", r);

	return 0;
}
*/
/*
int main()
{
	int num = 3;
	if (5 == num)//if (num == 5)
	//将代码写成这样可以防止 当不小心少掉一个"=" 时难以发现
	//因为"5 = num" 编译器会报错，而"num = 5" 不会报错
		printf("hehe\n");

	return 0;
}
//因此将一个常量和一个变量进行比较是最好将常量放在左边
*/

/*
//判断一个数是不是奇数
int main()
{
	int a = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	if (0 == (a % 2))
		printf("%d 是一个偶数\n", a);
	else
		printf("%d 是一个奇数\n", a);

	return 0;
}
*/
/*
//输出 1 到 100 之间的奇数
int main()
{
	//for(int i = 1; 100 >= i; i++)
	//	if ((i % 2) == 1)
	//	{
	//		printf("%d\n", i);
	//	}
	
	//或者

	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}

	return 0;
}
*/

