#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//  C语言的注释风格：可以将想要注释掉的代码用/* */框起来，但是在注释里嵌套注释就会出问题

/*
int main()
{
	char arr[] = "awan";
	char arr2[] = { 'a','w','a','n','\0' };
	
	int len = strlen(arr);//求字符串长度的函数，string length 头文件是 string.h
	printf("%d\n", len);

	printf("%d\n", strlen(arr2));//这样也可以

	
	return 0;
}
*/

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印浮点数（float）
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值

//转义字符
/*
int main()
{
	
	printf("abc\n");//此处\n为转义字符，指换行，不会被打印出来
	printf("abc\0def");//此处\0为转义字符，为结束标志，\0及其以后的内容不会被打印出来
	printf("\'\n");//打印" ' "
	printf("\"\n");//打印" " "
	printf("\\\n");//打印" \ "
	printf("\a");//警告字符，发出警告音
	printf("abc\tdef");//"\t"为水平制表符，代表一个TAB键
	

	printf("%c\n", '\130');//输出"X"，8进制的130 --> 10进制的88 --> 在ASCII编码中88为"X"
	//"\ddd"中"ddd"表示1~3个八进制的数字
	printf("%c\n", '\x60');//输出" ` "，16进制的60 --> 10进制的96 --> 在ASCII编码中96为" ` "
	//"\xdd"中"dd"表示1~2个十六进制的数字

	printf("%d\n", strlen("awan u"));//输出"6",空格也算

	printf("%d\n", strlen("c:\test\628\test.c"));//输出"14"，"\t"和"\62"均为转义字符，代表一个字符
	//八进制中没有8，所以是\62而非\628



	return 0;
}
*/

//C语言实现选择：
//1. if  else
//2. switch ...
// 
//C语言实现循环：
//while语句
//for语句
//do...while语句

/*
int main()
{
	int input = 0;
	printf("我说\n");
	printf("你看仙术杯吗？(1/0)\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("\n仙术杯很好看的");
	}
	else
	{
		printf("\n拜拜（用力挥手）");
	}

	return 0;
}
*/

/*
int main()
{
	int line = 0;
	printf("加入大群\n");

	while (line<20000)
	{
		printf("汲取营养%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("你成为了富营养的海嗣\n");
	}
	else
	{
		printf("你营养不足，成为了猎物\n");
	}

	return 0;
}
*/

/*
//定义函数
int Add(int x, int y)//Add是函数名 int是返回类型
{
	int z = 0;
	z = x + y;
	return z;
}//括号内为函数体

int main()
{
	int n1 = 0;
	int n2 = 0;
	//输入
	printf("请输入两个要相加的数字，用空格分隔：\n");
	scanf("%d %d", &n1, &n2);
	//求和
	//int sum = n1 + n2;
	// 或者
	int sum = Add(n1, n2);//调用函数
	//打印
	printf("二者和为 %d", sum);

	return 0;
}
*/

//
//0 - 数字0
//'0' - 字符0 - ASCII值是48
//'\0' - 字符 - ASCII值是0
//EOF - end of file 文件结束标志 值是-1
//

/*
//数组 - 一组相同类型元素的集合
int main()
{
	int arr[13] = { 1,1,4,5,1,4,1,9,1,9,8,1,0 };//13写不写都行，不写也会自动填充为13
	//定义一个数组，每个元素各有一个序号（0~12），即数组的下标，从零开始

	//注意！数组 与 字符串 不同，末尾不会有\0
	//详见下一个main

	printf("%d\n", arr[5]);	
	//打印序号5的内容
	
	//int i = 0;
	//while (i < 13)
	//{
	//	printf("%d ", arr[i]);
	//	i = i + 1;
	//}
	
	//或者
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	//通过循环 打印出整个数组 


	return 0;
}
*/

/*
int main()
{
	char arr[] = { 'w','a','n' };
	printf("%d\n", strlen(arr));//因为没有\0，所以输出很大的随机值

	//但是如果这样
	char arr2[4] = { 'w','a','n' };
	printf("%d\n", strlen(arr2));
	//则会正常输出为3
	//因为多设置了没被定义的元素，它会默认初始化为\0
	//被称为“不完全初始化”
	
	//如果
	char arr3[] = { 'w','a','n',0 };
	printf("%d\n", strlen(arr3));
	//也能输出3
	//因为'\0'的ASCII值为0

	return 0;
}
*/

/*
int main()
{
	//int n = 10;
	//int arr[n] = { 0 };
	////这里会报错，因为n不是常量
	
	//C99标准之前，数组的大小都是用常量或者常量表达式来制定
	// 例如：
	int arr2[10] = { 0 };
	int arr3[4 + 6] = { 0 };

	//C99标准之后，支持了变常数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的
	int m = 100;
	//int arr4[m];//但是不能接"= { 0 }"之类，即不能初始化

	//VS对c99中的一些语法支持的不是很好，不支持变常数组

	return 0;
}
*/

