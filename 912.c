#include <stdio.h>
#include <string.h>
//打印100-200之间的素数


/*int main(void)
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        int k = 2;
        while(k<i)
        {
            if(i%k == 0)
            {
                break;
            }
            k++;
            if(k == i)
            printf("%d ",i);
        }
    }
    return 0;
}*/
//__________________________________________________________


//是素数返回1，不是素数返回0


/*int is_prime(int n)
{
    int k = 2;
    while(k<n)
    {
        if(n%k == 0)
        {
            return 0;
        }
        k++;
        if(n == k)
        {
            return 1;
        }
    }
}*///自己写的麻烦版

//老师写的简便版
/*int is_prime(int n)
{
    int j = 0;
    for(j=2; j<=sqrt(n); j++)
    {
        if(n%j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        if(is_prime(i) == 1)
            printf("%d ",i);
    }
    return 0;
}
*/
/*int is_leap_year(int n)
{
    if(n%4 == 0)
    {
        if(n%100 != 0)
        {
            return 1;
        }
        else if(n%400 == 0)
        {
            return 1;
        }
    }
    return 0;
}*///自己写的小辣鸡
//老师写的
//if((n%4 == 0&&n%100 != 0) || (n%400 == 0))
//逢4闰，百年不闰，四百再闰

/*int main(void)
{
    int year = 0;

    for(year=1000; year<=2000; year++)
    {
        if(1 == is_leap_year(year))
            printf("%d ",year);
    }
    return 0;
}*/


//实现整形有序数组二分查找
//如果找到了返回这个数的下标，找不到返回-1
//只传送首元素地址,本质上arr是一个指针
/*int  binary_search(int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left<=right)
    {
        int mid =(right +left)/2;

        if(arr[mid]<k)
        {
            left = mid + 1;
        }
        else if(arr[mid]>k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);

    if(ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了，这个数的下标是：%d\n",ret);
    }

    return 0;
}*/


//每调用一次num就加一

/*void Add(int* p)
{
    (*p)++;
}

int main(void)
{
    int num = 0;
    Add(&num);
    printf("%d\n",num);
    return 0;
}*/


//链式访问：把一个函数的返回值作为另一个函数的参数


/*int main(void)
{
    int len = 0;
    printf("%d\n",strlen("abc"));
    return 0;
}*/


/*int main(void)

{
    printf("%d",printf("%d",printf("%d",43)));//4321
    return 0;
}*/

//函数声明
//int Add(int, int);
//#include "add.h"分文件编写

//判断闰年
/*int is_leap_year(int y)//是闰年返回1
{
    if((y%4 == 0 && y%100 != 0) || (y%400 == 0))
    {
        return 1;
    }
    else
        return 0;
}

int main(void)
{
    int year = 0;
    for(year=1000; year<=2000; year++)
       {

        if(1 == is_leap_year(year))
        printf("%d ",year);
       }
    return 0;
}*/


//交换两个整数

/*void change(int *px,int *py)
{
    int tmp = 0;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    change(&a,&b);
    printf("%d %d",a,b);
    return 0;
}*/
//乘法口诀表！


void multiply(int x)
{
    int j = 0;
    int k = 0;
    for(j=1; j<=x; j++)
        {
            for(k=1; k<=j; k++)
            {
                int l = j*k;
                printf("%d*%d=%d ",j,k,l);
            }
            printf("\n");
        }
}
int main(void)
{
    int a = 0;
    scanf("%d",&a);
    multiply(a);
    return 0;
}







































































