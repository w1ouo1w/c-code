#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*时间戳：当前计算机时间-计算机起始时间（1970.1.1）*/

/*void menu()
{
    printf("*******************************************\n");
    printf("*********  1.paly     0.exit  *************\n");
    printf("*******************************************\n");
}


void game()
{
    int ret = 0;
    int guess = 0;
    //拿时间戳设置随机数的生成起始点
    //time_t time(time_t *timer)
    ret = rand()%100+1;
    while(1)
    {
        printf("请猜数字:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else if(guess == ret)
        {
            printf("猜到了\n");
            break;
        }
    }
}



int main(void)
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }

    }while(input);
    return 0;
}
*/
























