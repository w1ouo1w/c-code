#include <stdio.h>
/*int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int sum = a * b;
    printf("%d",sum);
    return 0;
}*/
/*int main(void)
{
    char a = 'a';
    a = getchar();
    a = 'Q' - 'q' + a;
    printf("%c",a);
    return 0;
}*/
/*# �����2.��7�����ַ�ת

## ��Ŀ����

����һ����С�� $100$ ��С�� $1000$��ͬʱ����С�����һλ��һ�������������� $123.4$ ��Ҫ���������ַ�ת��������� $4.321$ �������

## �����ʽ

һ��һ��������

## �����ʽ

һ��һ��������

## ���� #1

### �������� #1

```
123.4
```

### ������� #1

```
4.321*/

/*int main(void)//999.9ʱ���Ϊ999.899999...Ϊʲô��
{
double a = 0.0;
scanf("%lf",&a);
int b = a/100;
int c = a/10 - 10*b;
int d = a - 100*b - 10*c;
double e = a - 100*b - 10*c - d;
double h = (double) b;
double i = (float) c;
double j = (float) d;

double f = 10*e + j/10 + i/100 + h/1000;
printf("%.3lf",f);
return 0;
}*/
/*int main(void)

{
    double t = 0.0;
    int n = 0;

    scanf("%lf%d",&t,&n);
    double m = t/n;
    int s = 2*n;
    printf("%.3lf\n",m);
    printf("%d",s);
    return 0;
}*/
/*int main(void)
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p = (a + b + c)/2;
    double s = p*(p - a)*(p - b)*(p - c);
    double S = sqrt(s);
    printf("%.1lf",S);
    return 0;
}
*/
/*=int main(void)
{
    again:
        printf("hehe\n");
        goto again;
        return 0;
}*/
/*int main(void)
{
    char input[20] = {0};

    system("shutdown -s -t 600");
    again:
    printf("��ע�⣬��ĵ��Խ���ʮ�����ڹػ���������룺��������ȡ���ػ�\n������:>");
    scanf("%s",input);
    if(strcmp(input,"������") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }

    return 0;
}*/





















