#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>


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
