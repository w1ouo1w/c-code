#include <stdio.h>

/*����Ϊ��λС��*/

int main(void)
{
    double t = 0.0;
    int c = 0;
    double n = 0.0;

    printf("��ѡ�����¶�ת���϶��밴1����ѡ�����϶�ת�����¶��밴0\n");
    scanf("%d",&c);
    printf("�������¶�-->:");
    scanf("%lf",&t);

    if(c == 0)
    {
        n = 9*t/5 + 32;
        printf("�����¶��ǣ�%.3lf�������¶��ǣ�%.3lf",t,n);

    }
    if(c == 1)
    {
        n = 5*(t - 32)/9;
        printf("�����¶��ǣ�%.3lf�������¶��ǣ�%.3lf",t,n);
    }
    return 0;
}


