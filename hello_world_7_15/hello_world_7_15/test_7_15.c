#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

/*
//ģ�������������������ξ��˳�
int main()
{
    int i = 0;
    char password[20] = { 0 };
    //�����������ַ���"abcdef"
    for (i = 0; i < 3; i++)
    {
        printf("����������\n");
        scanf("%s", password);
        if (strcmp(password, "abcdef") == 0)
            //�Ƚ�password��"abcdef"������
            //��ͬ�򷵻�0
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
            printf("�������\n");
    }
    if (i == 3)
        printf("��������������Σ��˳�����\n");

    return 0;
}
*/
/*
//��������Ϸ
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
    //rand������ķ�ΧΪ0��RAND_MAX
    //��0��32767

    int guess = 0;
    while (1)
    {
        printf("�������\n");
        scanf("%d", &guess);
        if (guess > ret)
            printf("�´���\n");
        else if (guess < ret)
            printf("��С��\n");
        else
        {
            printf("�¶���\n");
            break;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    //���ú���randǰ��Ҫ
    //��srand������һ�����������
    //��time�������Ի��һ��ʱ���
    int input = 0;
    do
    {
        menu();
        printf("�����룺>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("��������\n");
            break;
        }
    } while (input);

    return 0;
}
*/
/*
//goto���
//�ô��������ת
int main()
{
again:
  printf("hehe\n");
  printf("haha\n");
  goto again;
  //����ת��again�ĵط�
  //����goto����������ܻ�ʹ�����������
  //��������goto���
  //ע��goto���ܿ纯��ʹ��
  //����goto�����������ѭ��Ƕ�׷ǳ���


  return 0;
}
*/