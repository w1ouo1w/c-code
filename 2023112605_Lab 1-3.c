#include <stdio.h>

/*控制为三位小数*/

int main(void)
{
    double t = 0.0;
    int c = 0;
    double n = 0.0;

    printf("若选择华氏温度转摄氏度请按1，若选择摄氏度转华氏温度请按0\n");
    scanf("%d",&c);
    printf("请输入温度-->:");
    scanf("%lf",&t);

    if(c == 0)
    {
        n = 9*t/5 + 32;
        printf("摄氏温度是：%.3lf，华氏温度是：%.3lf",t,n);

    }
    if(c == 1)
    {
        n = 5*(t - 32)/9;
        printf("华氏温度是：%.3lf，摄氏温度是：%.3lf",t,n);
    }
    return 0;
}


