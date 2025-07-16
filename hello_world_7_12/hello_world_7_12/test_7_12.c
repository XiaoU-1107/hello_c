#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
		//ASCII值中除了数字0到9的字符
			continue;//跳过
		putchar(ch);
	}
	//只打印数字字符
	return 0;
}
*/

/*
//'a';的ASCII值是97
int main()
{
	printf("%c\n", 'a');
	printf("%c\n", 97);
	//打印：
	//a
	//a

	return 0;
}
*/
/*
//转换以下ASCII码为对应字符并输出他们
//73, 32, 99 ,97 ,110 ,32 ,100 ,111 ,32 ,105 ,116 ,33
//无需以空格隔开
int main()
{
	int arr[] = { 73, 32, 99 ,97 ,110 ,32 ,100 ,111 ,32 ,105 ,116 ,33 };
	//这里用char或int都行
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	while(i < sz)
	{
		printf("%c", arr[i]);
		i++;
	}
	//打印：I can do it!

	return 0;
}
*/
/*
//指定域宽输入输出
//输入一个人的出生日期，将该生日中的年、月、日分别输出
//输入：20130225
//输出：year=2013
//      month=02
//      date=25
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);

	printf("year=%d\n", year);
	printf("month=%02d\n", month);
	//"%02d"指用"0"将其补齐至两位
	printf("date=%02d\n", date);

	return 0;
}
*/
/*
//依次输入一个学生的学号，以及三科（C语言，数学，英语）成绩
//在屏幕上输出该学生的学号，三科成绩
//（注：输出成绩时需进行四舍五入且保留2位小数）
//输入：17140216;80.845,90.55,100.00
//输出：The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
int main()
{
	int id = 0;
	float c = 0.0f;
	//如果直接写"0.0"会被认为是double类型的
	//加一个"f"指float类型
	//精度要求不高用float
	//精度要求高用double
	float math = 0.0f;
	float eng = 0.0f;

	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);

	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c, math, eng);
	//"%.2f"指小数点后保留两位

	return 0;
}
*/
/*
//输出"printf("Hello world!")"的返回值
int main()
{
	int n = printf("Hello world!");
	//返回一个数字，即打印的长度
	//当遇到错误时，返回一个负数
	printf("\n%d\n", n);

	return 0;
}
*/
/*
//输出一下两句话：
//printf("Hello world!\n");
//cout << "Hello world!" << endl;
int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;");

	return 0;
}
*/

//找出四个数中的最大数
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	int max = arr[0];
	for (i = 1, i <= ((sizeof(arr)) / (sizeof(arr[0]))-1), i++;)
	{
		if (arr[i] >= max)
			max = arr[i];
	}

	printf("%d", max);

	return 0;
}