#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//模拟密码输入程序，输错三次就退出
int main()
{
    int i = 0;
    char password[20] = { 0 };
    //假设密码是字符串"abcdef"
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码\n");
        scanf("%s", password);
        if (strcmp(password, "abcdef") == 0)
            //比较password和"abcdef"的区别
            //相同则返回0
        {
            printf("登录成功\n");
            break;
        }
        else
            printf("密码错误\n");
    }
    if (i == 3)
        printf("密码输入错误三次，退出程序\n");

    return 0;
}
*/
/*
//猜数字游戏
#include <time.h>
#include <stdlib.h>

void menu()
{
    printf("**********************\n");
    printf("*****   1. play  *****\n");
    printf("*****   0. exit  *****\n");
    printf("**********************\n");
}

void game()
{
    int ret = rand() % 100 + 1;
    //rand随机数的范围为0到RAND_MAX
    //即0到32767

    int guess = 0;
    while (1)
    {
        printf("请猜数字\n");
        scanf("%d", &guess);
        if (guess > ret)
            printf("猜大了\n");
        else if (guess < ret)
            printf("猜小了\n");
        else
        {
            printf("猜对了\n");
            break;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    //调用函数rand前需要
    //用srand来设置一个随机数种子
    //用time函数可以获得一个时间戳
    int input = 0;
    do
    {
        menu();
        printf("请输入：>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入有误\n");
            break;
        }
    } while (input);

    return 0;
}
*/
/*
//goto语句
//用处：标记跳转
int main()
{
again:
  printf("hehe\n");
  printf("haha\n");
  goto again;
  //即跳转到again的地方
  //滥用goto随便乱跳可能会使代码出现问题
  //尽量少用goto语句
  //注意goto不能跨函数使用
  //但是goto用于跳出多层循环嵌套非常快


  return 0;
}
*/