#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
int main()
{
	int ch = getchar();
	//"getchar" 指从键盘获取一个字符输入，并返回成整形
	//如果读取错误，或者遇到文件结束，则会返回"EOF"
	//"EOF"其实是"end of file"
	//EOF;
	//通过右键 转到定义 可以看到 "#define EOF    (-1)"

	printf("%c\n", ch);
	putchar(ch);

	return 0;
}//打印两个输入的字符
*/
/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//读到EOF时停止
	{
		putchar(ch);
	}

	return 0;
}
//代码效果：重复打印输入的字符，若输入Ctrl+Z 则停止程序
//a
//a
//b
//b
//^ Z
//因为输入的是"a" 和回车键"\n" 所以putchar会先打印输入缓冲区内的"a",再打印"\n"
//因此会自动换行
*/

//举一个例子
//假设密码是一个字符串
int main()
{
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password);//其实密码用scanf读取不合适（

	//getchar();//读取了\n, 若不这么做，输入缓冲区中的\n会被存入变量ret中
	//但是scanf在输入缓冲区里遇到空格也会停止，因此输入缓冲区里
	//可能还有很多藏在空格后面的字符
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	//把他们全部清理掉

	printf("请确认密码（Y/N）：>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}