#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//一个工程中，可以有多个.c文件，但是只能有一个main函数

/*
//学习函数memset
//<string.h>
//阅读文档：
//void* memset(void* ptr, int value, size_t num);
//Fill block of memory
//Sets the first num bytes of the block of memory pointed by ptr 
//to the specified value(interpreted as an unsigned char).
//意思是从ptr这个位置开始，将向后num个字节内容设置成整形value值
//例子：
//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}
//尝试：
int main()
{
	char arr[20] = "hello_world";
	char arr2[20] = "hello_world";

	memset(arr, 'x', 5);
	printf("%s\n", arr);

	//将wor改成yyy：
	memset(arr2 + 6, 'y', 3);
	printf("%s\n", arr2);
	//arr2偏移六个字符，即到w前，将往后3个字符改为y

	return 0;
}
//尝试成功
*/
/*
//自学memmove:
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	memmove(str + 20, str + 15, 11);
//	//将str第15位往后11个字符复制，即"very useful."，在str第20位处往后11个字符换成复制体
//	puts(str);
//	//输出"memmove can be very very useful."
//	return 0;
//}
//尝试：
int main()
{
	char arr[] = "hello_world__7_17";
	memmove(arr + 6, arr, 11);
	//注意"11"不能溢出不然就会烫烫烫

	printf("%s\n", arr);

	return 0;
}
*/
/*
//自定义函数
//自定义函数和库函数一样，有函数名，返回值类型和函数参数
//举个例子，写一个函数可以找出两个整数中的最大值：
int get_max(int x, int y)
{
	return (x > y ? x : y);
}//函数的定义

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//函数的调用
	int m = get_max(a, b);

	printf("%d\n", m);

	return 0;
}
*/
/*
//写一个函数可以交换两个整形变量的内容
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//	//x和y叫形式参数
//	//行参是实参的一份临时拷贝，拥有独立的空间
//	//所以修改形参不会影响实参
//	//因此此处出错
//}

void Swap(int *px, int *py)
//如果去掉"*" 则会交换两个地址而不是对应的值
{
	int z = *px; //z = a
	*px = *py;   //a = b
	*py = z;     //b = z
	//有了a和b地址就能搞
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("交换前：a=%d b=%d\n", a, b);
	//a和b叫实际参数
	//Swap(a, b);
	Swap(&a, &b);
	//技巧：需要修改a和b的值时就传地址

	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}
*/

