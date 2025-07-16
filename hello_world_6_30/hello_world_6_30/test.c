#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//学习常量
// 1.字面常量
// 2.const修饰的常变量
// 3.define定义的标识符常量
// 4.枚举常量

//int main()
//{
//	//30;
//	//3.14;
//	//这些是字面上的常量
//	const int a = 10;
//	//a = 20;//不能修改常量a的值
//	printf("a=%d", a);
//
//	return 0;
//}

//int main()
//{
//	const int n = 10;//const修饰出的是常变量
//	int arr[n] = { 0 };//而这里[]里需要的是常量，因此报错
//
//	return 0;
//}

//#define MAX 100
//#define STR "awan"
////define定义的标识符常量
//
//int main()
//{
//	//MAX = 10;//常量不能改
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("a=%d\n", a);
//	printf("%s\n", STR);
//
//	return 0;
//}

//枚举常量
//enum MYFRENDS
//{
//	//枚举常量
//	AWAN,
//	XIEZI,
//	SHIMING,
//	DONGLI
//};
//int main()
//{
//	enum MYFRENDS BRO = DONGLI;
//	printf("%d\n", BRO);//输出3，代表序号
//	return 0;
//}

//int main()
//{
//	char MYBOR = "awan";
//	printf("%s\n", MYBOR);
//
//	return 0;	
//}

int main()
{
	char arr[] = "awan";
	//经f10调试监测会发现arr末尾存在一个“\0”
	//“\0”是字符串的结束标志
	//char arr2[] = { 'a','w','a','n' };
	////此处“arr2”末尾无“\0”
	printf("%s\n", arr);
	//printf("%s\n", arr2);//输出结果“awan烫烫烫烫烫烫烫烫烫烫烫烫”
	////字符串打印到\0为止
	char arr2[] = { 'a','w','a','n','\0' };
	printf("%s\n", arr2);
	//这里主动加上\0后就能正常打印


	return 0;
}