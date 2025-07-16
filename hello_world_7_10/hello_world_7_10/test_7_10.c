#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//switch语句的使用
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)//括号内必须是整形
	{
	case 1:
	//case后必须接整形常量表达式，不能是"1.0","n" ，可以是"一"
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}

	return 0;
}
*/
/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
	//case后可以不加break
	//没有break时会直接往下走
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
		//书写好习惯：该break虽然可加可不加
		//但最好是加上
		//方便以后多加case时不容易出错

	//如果输入"8"
	default:
		printf("选择错误\n");
		break;
	}

	return 0;
}
*/
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1: n++;
		case 2: m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	//m = 5, n = 3

	return 0;
}
*/
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			//break;
			//break作用于循环

			continue;
			//continue会跳过后面的代码，重新执行判断循环

		printf("%d ", i);
		i++;
	}

	return 0;
}
*/
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;

		printf("%d ", i);
	}

	return 0;
}//2 3 4 6 7 8 9 10 11
*/
//while循环中的
//break 是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

