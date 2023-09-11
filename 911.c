#include <stdio.h>
#include <string.h>
//替换字符串
/*int main()
{
    char arr1[] = "bit";
    char arr2[20] = "############";

    strcpy(arr2,arr1);
    printf("%s\n",arr2);
    return 0;
}*/
//替换字符

/*int main(void)
{
    char arr[] = "hello world";

    memset(arr, '*', 5);
    printf("%s\n",arr);
    return 0;
}*/
//取大函数

/*int Max(int x ,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int c = Max(a,b);
    printf("%d",c);
    return 0;
}*/

/*void Swap1(int x,int y)//不能完成任务，xy与ab地址不一样

{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}
//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会影响实参的
void Swap2(int* pa, int* pb)
{

    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    Swap2(&a, &b);
    printf("%d %d",a,b);
    return 0;

}*/
//打印100-200间的素数





























