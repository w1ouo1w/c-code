#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*ʱ�������ǰ�����ʱ��-�������ʼʱ�䣨1970.1.1��*/

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
    //��ʱ��������������������ʼ��
    //time_t time(time_t *timer)
    ret = rand()%100+1;
    while(1)
    {
        printf("�������:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("�´���\n");
        }
        else if(guess<ret)
        {
            printf("��С��\n");
        }
        else if(guess == ret)
        {
            printf("�µ���\n");
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
        printf("��ѡ��>:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }

    }while(input);
    return 0;
}
*/
























