#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
void test(void)
//在括号里加个void。当调用函数时传入了参数就会报警告，但依然可以运行
{
	printf("hehe\n");
}

int main()
{
	test();
	test(100);

	return 0;
}
*/
/*
int main(void)
{

	return 0;
}
//此处明确地说明了main函数不需要参数
//本质上main函数时有参数的
//

//main函数有3个参数
int main(int argc, char* argc[], char* envp[])
{

	return 0;
}
//仅作了解
*/

////函数的声明与定义
//int Add(int x, int y);

#include "Add.h"
//自己写的头文件用双引号
//本质上是把头文件的内容拷贝过来

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}

//int Add(int x, int y)
//{
//	return x + y;
//}

//将函数放在main函数后面会报警告 "Add"未定义
//可以在前面加上声明 "int Add(int x, int y);"
//
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么，但是具体是不是存在，函数声明决定不了
//2.函数的声明一般出现在函数的使用之前，要满足先声明后使用
//3.函数的声明一般要放在头文件中
//见Add.c 与头文件Add.h
//使用函数前只需要在程序前加上个 #include "Add.h" 就OK
//
//这样的做法的好处：
//1.协作的角度
//2.模块化、业务拆分
//