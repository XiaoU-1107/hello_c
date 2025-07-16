#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//全局变量
int g_val = 2025;
//全局变量是具有外部链接属性的
*/
/*
static int g_val = 2025;
//static修饰全局变量的时候，该变量的外部链接属性就变成了内部链接属性
//其他源文件(.c)就不能再使用这个全局变量了
*/

/*
static int Add(int x, int y)
{
	return x + y;
}
//static修饰函数时，该函数的外部链接属性就变成了内部链接属性
//其他源文件(.c)就不能再使用这个函数了
*/
