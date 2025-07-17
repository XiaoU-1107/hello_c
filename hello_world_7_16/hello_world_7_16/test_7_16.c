#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

/*
//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机
//在cmd中，"shutdown -s -t 60" 表示在60秒后关机
//"shutdown -a"表示取消关机
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在60秒内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		printf("不戳不戳\n");
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}
*/

//在计算机科学中，函数就是子程序
//一般会有输入参数并有返回值，提供对过程的分装盒对细节的隐藏
//这些代码通常被集成为软件库

//“世界上本来没有函数，只是用的人多了，就有了库函数”

//C语言常用的库函数：
//1.IO函数 - 输入输出相关<stdio.h>
//2.字符串操作函数 - <string.h>
//3.字符操作函数
//4.内存操作函数
//5.时间/日期函数
//6.数学函数
//7.其他库函数


//学习函数strcpy
//<string.h>
//阅读文档：
//strcpy
//char* strcpy(char* destination, const char* source);
//Copy string
//Copies the C string pointed by source into the array pointed by destination, 
//including the terminating null character(and stopping at that point).
//看它给出的例子：
///* strcpy example */
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}
/*
//即复制字符串，开始尝试：
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello_world";

	strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}
//尝试成功
*/


