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
/*# 【深基2.例7】数字反转

## 题目描述

输入一个不小于 $100$ 且小于 $1000$，同时包括小数点后一位的一个浮点数，例如 $123.4$ ，要求把这个数字翻转过来，变成 $4.321$ 并输出。

## 输入格式

一行一个浮点数

## 输出格式

一行一个浮点数

## 样例 #1

### 样例输入 #1

```
123.4
```

### 样例输出 #1

```
4.321*/

/*int main(void)//999.9时会变为999.899999...为什么？
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
    printf("请注意，你的电脑将在十分钟内关机，如果输入：我是猪，就取消关机\n请输入:>");
    scanf("%s",input);
    if(strcmp(input,"我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }

    return 0;
}*/





















